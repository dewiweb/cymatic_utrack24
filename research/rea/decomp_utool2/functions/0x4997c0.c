// rea decompile_all
// name: FUN_004997c0
// address: 0x4997c0
// body: available
// range: 0x4997c0-0x49986f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004997c0(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x14);
  if ((((*(int *)(iVar1 + 0xd4) != 0) || (*(char *)(iVar1 + 0xc5) != '\0')) &&
      (in_EAX = param_2, param_2 < *(uint *)(iVar1 + 0x18))) &&
     ((param_3 < *(uint *)(iVar1 + 0x1c) ||
      (in_EAX = *(uint *)(in_ECX + 0x18), (*(byte *)(in_EAX + 0x20) & 0x70) != 0)))) {
    iVar2 = *(int *)(iVar1 + 0xd4);
    if (((iVar2 != 0) || (*(char *)(iVar1 + 0xc5) != '\0')) &&
       ((0 < iVar2 && ((int)param_3 < 0x18)))) {
      uVar3 = FUN_00499870(param_1,0xffffffff);
      return uVar3;
    }
    if ((((iVar2 != 0) || (in_EAX = 0, *(char *)(iVar1 + 0xc5) != '\0')) &&
        (in_EAX = *(int *)(iVar1 + 0xd0) - *(int *)(iVar1 + 0xc0),
        *(int *)(iVar1 + 0xd4) < (int)in_EAX)) &&
       (in_EAX = *(uint *)(iVar1 + 0x1c) - 0x18, (int)in_EAX < (int)param_3)) {
      uVar3 = FUN_00499870(param_1,1);
      return uVar3;
    }
  }
  *(undefined8 *)(in_ECX + 0x28) = 0x3ff0000000000000;
  return in_EAX & 0xffffff00;
}

