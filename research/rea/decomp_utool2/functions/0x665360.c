// rea decompile_all
// name: FUN_00665360
// address: 0x665360
// body: available
// range: 0x665360-0x665465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00665360(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  int *in_ECX;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  piVar3 = (int *)in_ECX[6];
  iVar7 = piVar3[1];
  puVar5 = (undefined1 *)*piVar3;
  if (iVar7 == 0) {
    uVar4 = (*(code *)piVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00665387;
    puVar5 = (undefined1 *)*piVar3;
    iVar7 = piVar3[1];
  }
  uVar1 = *puVar5;
  puVar5 = puVar5 + 1;
  iVar7 = iVar7 + -1;
  if (iVar7 == 0) {
    uVar4 = (*(code *)piVar3[3])(in_ECX);
    if ((char)uVar4 == '\0') goto LAB_00665387;
    puVar5 = (undefined1 *)*piVar3;
    iVar7 = piVar3[1];
  }
  iVar7 = iVar7 + -1;
  puVar6 = puVar5 + 1;
  if (CONCAT11(uVar1,*puVar5) != 4) {
    *(undefined4 *)(*in_ECX + 0x14) = 0xb;
    (**(code **)*in_ECX)(in_ECX);
  }
  if (iVar7 == 0) {
    uVar4 = (*(code *)piVar3[3])(in_ECX);
    if ((char)uVar4 == '\0') goto LAB_00665387;
    puVar6 = (undefined1 *)*piVar3;
    iVar7 = piVar3[1];
  }
  uVar1 = *puVar6;
  puVar6 = puVar6 + 1;
  iVar7 = iVar7 + -1;
  if (iVar7 == 0) {
    uVar4 = (*(code *)piVar3[3])(in_ECX);
    if ((char)uVar4 == '\0') {
LAB_00665387:
      return uVar4 & 0xffffff00;
    }
    puVar6 = (undefined1 *)*piVar3;
    iVar7 = piVar3[1];
  }
  uVar2 = *puVar6;
  *(undefined4 *)(*in_ECX + 0x14) = 0x52;
  *(uint *)(*in_ECX + 0x18) = (uint)CONCAT11(uVar1,uVar2);
  (**(code **)(*in_ECX + 4))(in_ECX,1);
  in_ECX[0x3f] = (uint)CONCAT11(uVar1,uVar2);
  *piVar3 = (int)(puVar6 + 1);
  piVar3[1] = iVar7 + -1;
  return CONCAT31((int3)((uint)(iVar7 + -1) >> 8),1);
}

