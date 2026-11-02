// rea decompile_all
// name: FUN_0067c810
// address: 0x67c810
// body: available
// range: 0x67c810-0x67c8d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067c810(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined1 auStack_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_44;
  FUN_0044db90(&local_40,in_ECX + 4);
  if ((0 < local_38) && (0 < local_34)) {
    iVar2 = local_3c - *(int *)(in_ECX + 8);
    local_30 = 4;
    local_2c = 0x80000000;
    iVar1 = iVar2 + local_34;
    local_28 = 0xff;
    local_20 = 0;
    local_24 = local_40 << 8;
    local_1c = (local_40 + local_38) * 0x100;
    local_18 = 0xff;
    local_14 = 0x7fffffff;
    local_10 = 0;
    for (; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      FUN_0067ca70(iVar2,&local_30);
    }
    *(undefined1 *)(in_ECX + 0x1c) = 1;
  }
  __security_check_cookie(local_c ^ (uint)auStack_44);
  return;
}

