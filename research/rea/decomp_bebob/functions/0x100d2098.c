// rea decompile_all
// name: FUN_100d2098
// address: 0x100d2098
// body: available
// range: 0x100d2098-0x100d2171 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d216d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * __fastcall FUN_100d2098(int *param_1)

{
  CMFCFontInfo *this;
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  int local_20;
  int *local_1c;
  int *local_18;
  uint local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  puVar2 = &LAB_10116f23;
  local_8 = 0x100d20a4;
  local_14 = 0;
  local_18 = param_1;
  puVar1 = DAT_10169688;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return puVar2;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    this = (CMFCFontInfo *)puVar1[2];
    puVar2 = (undefined1 *)local_18[0x3d];
    puVar1 = (undefined4 *)*puVar1;
    if ((*(uint *)(this + 0x10) & (uint)puVar2) != 0) {
      iVar3 = FUN_100d1fc8(*(ushort **)(this + 4));
      if (1 < iVar3) {
        ppiVar5 = (int **)CMFCFontInfo::GetFullName(this);
        local_14 = local_14 | 2;
        local_8 = 1;
      }
      else {
        piVar4 = FUN_10005e30((int *)(*(int *)(this + 4) + -0x10));
        local_1c = piVar4 + 4;
        local_8 = 0;
        local_14 = local_14 | 1;
        ppiVar5 = &local_1c;
      }
      local_8 = (uint)(1 < iVar3);
      puVar2 = (undefined1 *)(**(code **)(*local_18 + 200))(*ppiVar5,this);
      if ((local_14 & 2) != 0) {
        local_14 = local_14 & 0xfffffffd;
        puVar2 = (undefined1 *)FUN_10001030((undefined4 *)(local_20 + -0x10));
      }
      local_8 = 0xffffffff;
      if ((local_14 & 1) != 0) {
        local_14 = local_14 & 0xfffffffe;
        puVar2 = (undefined1 *)FUN_10001030(local_1c + -4);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

