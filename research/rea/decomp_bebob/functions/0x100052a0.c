// rea decompile_all
// name: FUN_100052a0
// address: 0x100052a0
// body: available
// range: 0x100052a0-0x10005415 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100052a0(void *this,undefined4 *param_1,int *param_2)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  undefined1 local_8a4 [8];
  int *local_89c;
  undefined1 local_898;
  undefined4 local_897;
  undefined4 local_893;
  undefined1 local_88f;
  undefined4 local_88e;
  short local_88a;
  undefined1 local_888;
  int local_88 [33];
  
  local_88[0x20] = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_89c = param_2;
  if (*(int *)((int)this + 0x44) != 0) {
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    local_88[8] = 0;
    local_88[9] = 0;
    local_88[10] = 0;
    local_88[0xb] = 0;
    local_88[0xc] = 0;
    local_88[0xd] = 0;
    local_88[0xe] = 0;
    local_88[0xf] = 0;
    local_88[0x10] = 0;
    local_88[0x11] = 0;
    local_88[0x12] = 0;
    local_88[0x13] = 0;
    local_88[0x14] = 0;
    local_88[0x15] = 0;
    local_88[0x16] = 0;
    local_88[0x17] = 0;
    local_88[0x18] = 0;
    local_88[0x19] = 0;
    local_88[0x1a] = 0;
    local_88[0x1b] = 0;
    local_88[0x1c] = 0;
    local_88[0x1d] = 0;
    local_88[0x1e] = 0;
    local_88[0x1f] = 0;
    local_893 = 0;
    local_888 = 0;
    local_88a = (*(short *)((int)this + 0x44) + 1) * 4;
    local_88e = 0;
    local_898 = 1;
    local_897 = 2;
    local_88f = 0x81;
    iVar2 = (**(code **)(**(int **)((int)this + 0x94) + 0x20))
                      (&local_898,0x810,local_88,*(int *)((int)this + 0x44) * 4 + 4,local_8a4);
    if (iVar2 == 0) {
      if (0 < *(int *)((int)this + 0x44)) {
        iVar2 = 0;
        pdVar3 = (double *)*param_1;
        do {
          dVar1 = (double)local_88[iVar2];
          if (local_88[iVar2] < 0) {
            dVar1 = dVar1 + 4294967296.0;
          }
          iVar2 = iVar2 + 1;
          *pdVar3 = dVar1 / 2147483647.0;
          pdVar3 = pdVar3 + 1;
        } while (iVar2 < *(int *)((int)this + 0x44));
      }
      *local_89c = local_88[*(int *)((int)this + 0x44)];
      __security_check_cookie(local_88[0x20] ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_88[0x20] ^ (uint)&stack0xfffffffc);
  return;
}

