// rea decompile_all
// name: _raise
// address: 0x5c36dd
// body: available
// range: 0x5c36dd-0x5c384a inclusive
// range: 0x5c3860-0x5c388c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2008 Release */

int __cdecl _raise(int _SigNum)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  _ptiddata p_Var6;
  int local_34;
  void *local_30;
  int local_28;
  int local_20;
  
  p_Var6 = (_ptiddata)0x0;
  local_20 = 0;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar5 = &DAT_0095d294;
        uVar4 = DAT_0095d294;
        goto LAB_005c3792;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_005c3770;
        if (_SigNum != 8) goto LAB_005c3754;
      }
    }
    p_Var6 = __getptd_noexit();
    if (p_Var6 == (_ptiddata)0x0) {
      return -1;
    }
    iVar1 = siglookup(p_Var6->_pxcptacttab);
    puVar5 = (undefined4 *)(iVar1 + 8);
    pcVar3 = (code *)*puVar5;
  }
  else {
    if (_SigNum == 0xf) {
      puVar5 = &DAT_0095d2a0;
      uVar4 = DAT_0095d2a0;
    }
    else if (_SigNum == 0x15) {
      puVar5 = &DAT_0095d298;
      uVar4 = DAT_0095d298;
    }
    else {
      if (_SigNum != 0x16) {
LAB_005c3754:
        piVar2 = __errno();
        *piVar2 = 0x16;
        __invalid_parameter(0,0,0,0,0);
        return -1;
      }
LAB_005c3770:
      puVar5 = &DAT_0095d29c;
      uVar4 = DAT_0095d29c;
    }
LAB_005c3792:
    local_20 = 1;
    pcVar3 = (code *)__decode_pointer(uVar4);
  }
  iVar1 = 0;
  if (pcVar3 == (code *)0x1) {
    return 0;
  }
  if (pcVar3 == (code *)0x0) {
    iVar1 = __exit(3);
  }
  if (local_20 != iVar1) {
    __lock(iVar1);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = p_Var6->_tpxcptinfoptrs;
    p_Var6->_tpxcptinfoptrs = (void *)0x0;
    if (_SigNum == 8) {
      local_34 = p_Var6->_tfpecode;
      p_Var6->_tfpecode = 0x8c;
      goto LAB_005c37f6;
    }
  }
  else {
LAB_005c37f6:
    if (_SigNum == 8) {
      for (local_28 = DAT_00956d80; local_28 < DAT_00956d84 + DAT_00956d80; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + (int)p_Var6->_pxcptacttab) = 0;
      }
      goto LAB_005c3830;
    }
  }
  uVar4 = __encoded_null();
  *puVar5 = uVar4;
LAB_005c3830:
  FUN_005c3851();
  if (_SigNum == 8) {
    (*pcVar3)(8,p_Var6->_tfpecode);
  }
  else {
    (*pcVar3)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  p_Var6->_tpxcptinfoptrs = local_30;
  if (_SigNum == 8) {
    p_Var6->_tfpecode = local_34;
  }
  return 0;
}

