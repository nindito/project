from django.apps import AppConfig


class LearnConfig(AppConfig):
    name = 'learn'

    def ready(self):
        import learn.signals
