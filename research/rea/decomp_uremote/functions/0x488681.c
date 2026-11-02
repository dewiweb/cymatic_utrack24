// rea decompile_all
// name: FUN_00488681
// address: 0x488681
// body: available
// range: 0x488681-0x488717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00488681(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  
  puVar2 = (undefined4 *)param_1[6];
  iVar6 = puVar2[1];
  pbVar7 = (byte *)*puVar2;
  if (iVar6 == 0) {
    cVar3 = (*(code *)puVar2[3])(param_1);
    if (cVar3 != '\0') {
      pbVar7 = (byte *)*puVar2;
      iVar6 = puVar2[1];
      goto LAB_004886ac;
    }
LAB_004886a0:
    uVar4 = 0;
  }
  else {
LAB_004886ac:
    bVar1 = *pbVar7;
    iVar6 = iVar6 + -1;
    pbVar7 = pbVar7 + 1;
    if (iVar6 == 0) {
      cVar3 = (*(code *)puVar2[3])(param_1);
      if (cVar3 == '\0') goto LAB_004886a0;
      pbVar7 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    uVar5 = (uint)*pbVar7;
    if ((bVar1 != 0xff) || (uVar5 != 0xd8)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x35;
      *(uint *)(*param_1 + 0x18) = (uint)bVar1;
      *(uint *)(*param_1 + 0x1c) = uVar5;
      (**(code **)*param_1)(param_1);
    }
    param_1[0x5f] = uVar5;
    *puVar2 = pbVar7 + 1;
    puVar2[1] = iVar6 + -1;
    uVar4 = 1;
  }
  return uVar4;
}

