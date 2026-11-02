// rea decompile_all
// name: FUN_0047b104
// address: 0x47b104
// body: available
// range: 0x47b104-0x47b2a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047b104(void)

{
  char cVar1;
  int in_EAX;
  int *unaff_EBX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  cVar1 = (**(code **)(*unaff_EBX + 8))();
  do {
    if (cVar1 != '\0') {
      return;
    }
    cVar1 = (**(code **)(*unaff_EBX + 0x10))();
    if (cVar1 < 'n') {
      if (cVar1 == 'm') {
        fVar2 = (float10)(**(code **)(*unaff_EBX + 0x30))();
        fVar3 = (float10)(**(code **)(*unaff_EBX + 0x30))();
        FUN_00478b0d((float)fVar2,(float)fVar3);
      }
      else if (cVar1 == 'b') {
        fVar2 = (float10)(**(code **)(*unaff_EBX + 0x30))();
        fVar3 = (float10)(**(code **)(*unaff_EBX + 0x30))();
        fVar4 = (float10)(**(code **)(*unaff_EBX + 0x30))();
        fVar5 = (float10)(**(code **)(*unaff_EBX + 0x30))();
        fVar6 = (float10)(**(code **)(*unaff_EBX + 0x30))();
        fVar7 = (float10)(**(code **)(*unaff_EBX + 0x30))();
        FUN_00478d07((float)fVar2,(float)fVar3,(float)fVar4,(float)fVar5,(float)fVar6,(float)fVar7);
      }
      else if (cVar1 == 'c') {
        FUN_00478e1f();
      }
      else {
        if (cVar1 == 'e') {
          return;
        }
        if (cVar1 == 'l') {
          fVar2 = (float10)(**(code **)(*unaff_EBX + 0x30))();
          fVar3 = (float10)(**(code **)(*unaff_EBX + 0x30))();
          FUN_00478ba1((float)fVar2,(float)fVar3);
        }
      }
    }
    else if (cVar1 == 'n') {
      *(undefined1 *)(in_EAX + 0x1c) = 1;
    }
    else if (cVar1 == 'q') {
      fVar2 = (float10)(**(code **)(*unaff_EBX + 0x30))();
      fVar3 = (float10)(**(code **)(*unaff_EBX + 0x30))();
      fVar4 = (float10)(**(code **)(*unaff_EBX + 0x30))();
      fVar5 = (float10)(**(code **)(*unaff_EBX + 0x30))();
      FUN_00478c33((float)fVar2,(float)fVar3,(float)fVar4,(float)fVar5);
    }
    else if (cVar1 == 'z') {
      *(undefined1 *)(in_EAX + 0x1c) = 0;
    }
    cVar1 = (**(code **)(*unaff_EBX + 8))();
  } while( true );
}

