// rea decompile_all
// name: FUN_0048f800
// address: 0x48f800
// body: available
// range: 0x48f800-0x48f92a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048f800(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fe220;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(in_ECX + 0x70);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(in_ECX + 0x74);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(in_ECX + 0x78);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(in_ECX + 0x7c);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(in_ECX + 0x80);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(in_ECX + 0x58);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(in_ECX + 0x5c);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(in_ECX + 100);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(in_ECX + 0x68);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0x40);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x44);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(in_ECX + 0x48);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(in_ECX + 0x4c);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(in_ECX + 0x50);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(in_ECX + 0x54);
  *(undefined4 *)(in_ECX + 0x40) = param_3;
  *(undefined4 *)(in_ECX + 0x44) = param_4;
  *(undefined4 *)(in_ECX + 0x48) = param_5;
  *(undefined4 *)(in_ECX + 0x4c) = param_6;
  *(uint *)(in_ECX + 0x50) = param_2 & 0x70;
  iVar4 = FUN_006d1d80(uVar3);
  if (iVar4 == 0) {
    *(undefined4 *)(in_ECX + 0x54) = 0;
  }
  else {
    *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(iVar4 + 0x2c);
  }
  *(undefined1 *)(in_ECX + 0xa8) = 0;
  puVar2 = *(undefined4 **)(in_ECX + 0x30);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x30) = 0;
    LOCK();
    piVar1 = puVar2 + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

