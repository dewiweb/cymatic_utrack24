// rea decompile_all
// name: FUN_004603ff
// address: 0x4603ff
// body: available
// range: 0x4603ff-0x4604c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004603ff(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  _Ctypevec *p_Var3;
  undefined1 local_b8 [116];
  _Ctypevec local_44;
  undefined1 local_34 [28];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa8;
  local_8 = 0x46040e;
  local_14 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar1 = (undefined4 *)FUN_005af82d(0x18);
    local_8 = 0;
    local_18 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_00460390(local_34);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_14 = 1;
      FUN_004601db(local_b8,uVar2);
      local_14 = 3;
      puVar1[1] = 0;
      *puVar1 = std::ctype<char>::vftable;
      p_Var3 = __Getctype(&local_44);
      puVar1[2] = p_Var3->_Page;
      puVar1[3] = p_Var3->_Table;
      puVar1[4] = p_Var3->_Delfl;
      puVar1[5] = p_Var3->_LocaleName;
    }
    local_8 = 2;
    *param_1 = (int)puVar1;
    if ((local_14 & 2) != 0) {
      local_14 = local_14 & 0xfffffffd;
      FUN_00460243(local_b8);
    }
    if ((local_14 & 1) != 0) {
      FID_conflict__Tidy(1,0);
    }
  }
  return 2;
}

