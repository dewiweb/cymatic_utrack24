// rea decompile_all
// name: FUN_00623d50
// address: 0x623d50
// body: available
// range: 0x623d50-0x623e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00623d50(void)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  int *in_ECX;
  LPCRITICAL_SECTION in_EDX;
  undefined4 local_22c;
  undefined4 local_228;
  int local_224 [68];
  undefined4 local_114;
  int local_110;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  BVar2 = TryEnterCriticalSection(in_EDX);
  if (BVar2 != 0) {
    iVar1 = *in_ECX;
    local_22c = 0;
    local_228 = 0;
    local_114 = 1;
    local_224[2] = 1;
    local_224[3] = iVar1;
    local_110 = iVar1;
    iVar3 = Ordinal_18(iVar1 + 1,&local_114,0,0,&local_22c);
    if ((-1 < iVar3) && (-1 < *in_ECX)) {
      local_224[1] = 4;
      iVar3 = Ordinal_7(iVar1,0xffff,0x1007,local_224,local_224 + 1);
      if ((-1 < iVar3) && (local_224[0] == 0)) {
        Ordinal_151(iVar1,&local_114);
        LeaveCriticalSection(in_EDX);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    LeaveCriticalSection(in_EDX);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

