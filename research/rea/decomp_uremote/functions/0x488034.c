// rea decompile_all
// name: FUN_00488034
// address: 0x488034
// body: available
// range: 0x488034-0x488114 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00488034(int *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  
  puVar3 = (undefined4 *)param_1[6];
  iVar5 = puVar3[1];
  puVar6 = (undefined1 *)*puVar3;
  if (iVar5 == 0) {
    uVar4 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar4 != '\0') {
      puVar6 = (undefined1 *)*puVar3;
      iVar5 = puVar3[1];
      goto LAB_00488062;
    }
LAB_00488053:
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
LAB_00488062:
    uVar1 = *puVar6;
    iVar5 = iVar5 + -1;
    puVar6 = puVar6 + 1;
    if (iVar5 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_00488053;
      puVar6 = (undefined1 *)*puVar3;
      iVar5 = puVar3[1];
    }
    iVar5 = iVar5 + -1;
    pbVar7 = puVar6 + 1;
    if (CONCAT11(uVar1,*puVar6) != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 0xb;
      (**(code **)*param_1)(param_1);
    }
    if (iVar5 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_00488053;
      pbVar7 = (byte *)*puVar3;
      iVar5 = puVar3[1];
    }
    bVar2 = *pbVar7;
    iVar5 = iVar5 + -1;
    pbVar7 = pbVar7 + 1;
    if (iVar5 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_00488053;
      pbVar7 = (byte *)*puVar3;
      iVar5 = puVar3[1];
    }
    uVar4 = (uint)CONCAT11(bVar2,*pbVar7);
    *(undefined4 *)(*param_1 + 0x14) = 0x52;
    *(uint *)(*param_1 + 0x18) = uVar4;
    (**(code **)(*param_1 + 4))(param_1,1);
    param_1[0x3f] = uVar4;
    *puVar3 = pbVar7 + 1;
    puVar3[1] = iVar5 + -1;
    uVar4 = CONCAT31((uint3)bVar2,1);
  }
  return uVar4;
}

