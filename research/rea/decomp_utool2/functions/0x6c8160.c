// rea decompile_all
// name: FUN_006c8160
// address: 0x6c8160
// body: available
// range: 0x6c8160-0x6c824d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c8160(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00725fe6;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_ECX + 0xa4) != 0) {
    local_30 = 0;
    local_2c = &DAT_00bfe12c;
    local_28 = &DAT_00bfe12c;
    local_24 = &DAT_00bfe12c;
    local_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    local_8 = 0;
    ExceptionList = &local_10;
    iVar3 = FUN_00689a20(*(undefined4 *)(in_ECX + 0xbc),&local_30);
    if (iVar3 == 0) {
      if ((*(byte *)(in_ECX + 0x69) & 0x10) == 0) {
        *(byte *)(in_ECX + 0x69) = *(byte *)(in_ECX + 0x69) | 0x10;
        iVar3 = *(int *)(in_ECX + 0xc);
        if ((iVar3 == 0) ||
           (((*(byte *)(iVar3 + 0x69) & 0x10) == 0 &&
            ((*(int *)(iVar3 + 0xc) == 0 || (cVar1 = FUN_006e6320(uVar2), cVar1 != '\0')))))) {
          FUN_006cc240();
        }
      }
    }
    else {
      FUN_006c88b0(&local_30);
      FUN_006e9390(~(byte)uStack_14 & 1);
      FUN_006e5380((byte)(uStack_14 >> 1) & 1,0);
    }
    FUN_004915a0();
    ExceptionList = local_10;
    return;
  }
  return;
}

