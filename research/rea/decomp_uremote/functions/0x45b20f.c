// rea decompile_all
// name: FUN_0045b20f
// address: 0x45b20f
// body: available
// range: 0x45b20f-0x45b29d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045b20f(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int unaff_EBX;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_10 [12];
  
  piVar2 = param_1;
  uVar6 = 0xe;
  puVar5 = local_10;
  (**(code **)(*param_1 + 8))(puVar5,0xe,1);
  cVar3 = FUN_00503960(puVar5,uVar6);
  if (cVar3 == '\0') {
    uVar7 = 3;
    uVar6 = 0xe;
    (**(code **)(*piVar2 + 8))(local_10,0xe,3);
    cVar3 = FUN_00503960(uVar6,uVar7);
    if (cVar3 == '\0') {
      return;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(unaff_EBX + 0x38);
  EnterCriticalSection(lpCriticalSection);
  piVar4 = *(int **)(unaff_EBX + 0x50);
  piVar1 = piVar4 + *(int *)(unaff_EBX + 0x58);
  do {
    if (piVar4 == piVar1) {
      LeaveCriticalSection(lpCriticalSection);
      (*(code *)**(undefined4 **)(*(int *)(piVar2[1] + 8) + 4 + (int)piVar2))();
      FUN_0045b3f2(&param_1);
LAB_0045b28c:
      *(undefined1 *)(unaff_EBX + 100) = 1;
      return;
    }
    if (piVar2 == (int *)*piVar4) {
      LeaveCriticalSection(lpCriticalSection);
      goto LAB_0045b28c;
    }
    piVar4 = piVar4 + 1;
  } while( true );
}

