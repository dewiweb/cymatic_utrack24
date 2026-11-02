// rea decompile_all
// name: FUN_00658500
// address: 0x658500
// body: available
// range: 0x658500-0x6585b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00658500(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_EDX;
  
  uVar1 = *(ushort *)(in_EDX + 0x4a);
  if ((short)uVar1 < 0) {
    return 0;
  }
  if (((uVar1 & 2) != 0) && (iVar6 = FUN_00658600(100), iVar6 == 0)) {
    *(ushort *)(in_EDX + 0x4a) = uVar1 | 0x8000;
    FUN_006561c0();
    return 0;
  }
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  *(ushort *)(in_EDX + 0x4a) = uVar1 | 2;
  *(undefined4 *)(in_EDX + 4) = uVar2;
  *(undefined4 *)(in_EDX + 8) = uVar3;
  *(undefined4 *)(in_EDX + 0xc) = uVar4;
  *(undefined4 *)(in_EDX + 0x10) = uVar5;
  uVar2 = param_1[5];
  uVar3 = param_1[6];
  uVar4 = param_1[7];
  *(undefined4 *)(in_EDX + 0x14) = param_1[4];
  *(undefined4 *)(in_EDX + 0x18) = uVar2;
  *(undefined4 *)(in_EDX + 0x1c) = uVar3;
  *(undefined4 *)(in_EDX + 0x20) = uVar4;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(in_EDX + 0x24) = *param_2;
  *(undefined4 *)(in_EDX + 0x28) = uVar2;
  *(undefined4 *)(in_EDX + 0x2c) = uVar3;
  *(undefined4 *)(in_EDX + 0x30) = uVar4;
  uVar3 = param_2[5];
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  uVar2 = param_2[8];
  *(undefined4 *)(in_EDX + 0x34) = param_2[4];
  *(undefined4 *)(in_EDX + 0x38) = uVar3;
  *(undefined4 *)(in_EDX + 0x3c) = uVar4;
  *(undefined4 *)(in_EDX + 0x40) = uVar5;
  *(undefined4 *)(in_EDX + 0x44) = uVar2;
  iVar6 = FUN_00658600(1000);
  if (iVar6 == 0) {
    *(ushort *)(in_EDX + 0x4a) = uVar1 & 0xffbf | 2;
    return 2;
  }
  *(ushort *)(in_EDX + 0x4a) = uVar1 | 0x42;
  return 2;
}

