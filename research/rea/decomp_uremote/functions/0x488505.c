// rea decompile_all
// name: FUN_00488505
// address: 0x488505
// body: available
// range: 0x488505-0x4885a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00488505(int *param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  byte *pbVar7;
  
  piVar4 = param_1;
  puVar3 = (undefined4 *)param_1[6];
  pbVar7 = (byte *)*puVar3;
  iVar1 = puVar3[1];
  if (puVar3[1] == 0) {
    cVar5 = (*(code *)puVar3[3])(param_1);
    if (cVar5 != '\0') {
      pbVar7 = (byte *)*puVar3;
      iVar1 = puVar3[1];
      goto LAB_00488533;
    }
LAB_00488527:
    uVar6 = 0;
  }
  else {
LAB_00488533:
    param_1 = (int *)iVar1;
    bVar2 = *pbVar7;
    param_1 = (int *)((int)param_1 + -1);
    pbVar7 = pbVar7 + 1;
    if (param_1 == (int *)0x0) {
      cVar5 = (*(code *)puVar3[3])(piVar4);
      if (cVar5 == '\0') goto LAB_00488527;
      param_1 = (int *)puVar3[1];
      pbVar7 = (byte *)*puVar3;
    }
    iVar1 = (uint)bVar2 * 0x100 + -2 + (uint)*pbVar7;
    *(undefined4 *)(*piVar4 + 0x14) = 0x5b;
    *(int *)(*piVar4 + 0x18) = piVar4[0x5f];
    *(int *)(*piVar4 + 0x1c) = iVar1;
    (**(code **)(*piVar4 + 4))(piVar4,1);
    *puVar3 = pbVar7 + 1;
    puVar3[1] = (int)param_1 + -1;
    if (0 < iVar1) {
      (**(code **)(piVar4[6] + 0x10))(piVar4,iVar1);
    }
    uVar6 = 1;
  }
  return uVar6;
}

