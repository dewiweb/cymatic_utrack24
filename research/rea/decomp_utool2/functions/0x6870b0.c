// rea decompile_all
// name: FUN_006870b0
// address: 0x6870b0
// body: available
// range: 0x6870b0-0x687130 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006870b0(void)

{
  int iVar1;
  uint in_ECX;
  short sVar2;
  undefined4 local_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined *local_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  uint uVar3;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  sVar2 = (short)in_ECX;
  if ((in_ECX & 0x10000) == 0) {
    if ((ushort)(sVar2 - 0x61U) < 0x1a) {
      in_ECX = in_ECX - 0x20;
    }
    uVar3 = in_ECX & 0xffff;
    iVar1 = 0;
    local_30 = &UNK_00bc002c;
    puStack_2c = &UNK_00bb002b;
    puStack_28 = &UNK_00bd002d;
    puStack_24 = &UNK_00be002e;
    local_10 = 0xdb005b;
    local_20 = &UNK_00ba003b;
    puStack_1c = &UNK_00ba003a;
    puStack_18 = &UNK_00bf002f;
    puStack_14 = &UNK_00bf003f;
    local_c = 0xdd005d;
    do {
      if ((short)uVar3 == *(short *)((int)&local_30 + iVar1 * 2)) {
        uVar3 = (uint)*(ushort *)((int)&local_30 + iVar1 * 2 + 2);
      }
      sVar2 = (short)uVar3;
      iVar1 = iVar1 + 2;
    } while (iVar1 < 0x14);
  }
  GetAsyncKeyState((int)sVar2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

