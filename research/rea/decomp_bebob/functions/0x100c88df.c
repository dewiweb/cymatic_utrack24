// rea decompile_all
// name: CPaneContainer::CalcAvailableSpace
// address: 0x100c88df
// body: available
// range: 0x100c88df-0x100c89b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CPaneContainer::CalcAvailableSpace(class CSize,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CPaneContainer::CalcAvailableSpace
          (CPaneContainer *this,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int local_30;
  int local_2c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  (**(code **)(*(int *)this + 0xc))(&local_18,0);
  local_30 = local_18;
  local_2c = local_14;
  if (param_5 == 0) {
    local_30 = local_18 + param_3;
    local_2c = local_14 + param_4;
    iVar1 = local_10;
    iVar2 = local_c;
  }
  else {
    iVar1 = local_10 + param_3;
    iVar2 = local_c + param_4;
  }
  local_20 = 0;
  local_1c = 0;
  (**(code **)(*(int *)this + 0x10))(&local_20);
  *param_2 = param_3;
  param_2[1] = param_4;
  if (iVar1 - local_30 < local_20) {
    iVar1 = (local_10 - local_18) - local_20;
    *param_2 = iVar1;
    if (iVar1 < 0) {
      *param_2 = 0;
    }
    if (param_3 < 0) {
      *param_2 = -*param_2;
    }
  }
  if (iVar2 - local_2c < local_1c) {
    local_2c = (iVar2 - local_1c) - local_2c;
    param_2[1] = local_2c;
    if (local_2c < 0) {
      param_2[1] = 0;
    }
    if (param_4 < 0) {
      param_2[1] = -param_2[1];
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

