// rea decompile_all
// name: CMFCToolBarFontComboBox::AddFont
// address: 0x100d226d
// body: available
// range: 0x100d226d-0x100d23d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d2331 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBarFontComboBox::AddFont(struct tagENUMLOGFONTW
   *,int,wchar_t const *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarFontComboBox::AddFont
          (CMFCToolBarFontComboBox *this,tagENUMLOGFONTW *param_1,int param_2,wchar_t *param_3)

{
  int *piVar1;
  __POSITION *p_Var2;
  bool bVar3;
  int iVar4;
  CMFCFontInfo *pCVar5;
  undefined4 *puVar6;
  void *this_00;
  byte bVar7;
  byte bVar8;
  __POSITION *p_Var9;
  int local_18;
  CObList *local_14;
  
  local_14 = *(CObList **)(this + 0xfc);
  if (local_14 == (CObList *)0x0) {
    local_14 = (CObList *)&DAT_10169684;
  }
  if (param_1[0x17] != (tagENUMLOGFONTW)0x4d) {
    bVar7 = (byte)this[0xf9] & 0xf0;
    bVar8 = (byte)this[0xf9] & 0xf;
    if (((bVar8 == 0) || (bVar8 == ((byte)param_1[0x1b] & 0xf))) &&
       ((bVar7 == 0 || (bVar7 == ((byte)param_1[0x1b] & 0xf0))))) {
      puVar6 = *(undefined4 **)(local_14 + 4);
      do {
        if (puVar6 == (undefined4 *)0x0) {
          iVar4 = GetSystemMetrics(0x2a);
          if ((iVar4 != 0) && (*(short *)(param_1 + 0x1c) == 0x40)) {
            return 0;
          }
          pCVar5 = FUN_1000858a(0x14);
          if (pCVar5 == (CMFCFontInfo *)0x0) {
            param_1 = (tagENUMLOGFONTW *)0x0;
          }
          else {
            param_1 = (tagENUMLOGFONTW *)
                      CMFCFontInfo::CMFCFontInfo
                                (pCVar5,(wchar_t *)(param_1 + 0x1c),param_3,(uchar)param_1[0x17],
                                 (uchar)param_1[0x1b],param_2);
          }
          bVar3 = false;
          p_Var9 = *(__POSITION **)(local_14 + 4);
          goto LAB_100d2346;
        }
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        piVar1 = puVar6 + 2;
        puVar6 = (undefined4 *)*puVar6;
        iVar4 = FUN_10005720((void *)(*piVar1 + 4),(ushort *)(param_1 + 0x1c));
      } while (iVar4 != 0);
    }
  }
  return 0;
  while( true ) {
    pCVar5 = *(CMFCFontInfo **)(p_Var9 + 8);
    p_Var2 = *(__POSITION **)p_Var9;
    puVar6 = (undefined4 *)CMFCFontInfo::GetFullName((CMFCFontInfo *)param_1);
    this_00 = (void *)CMFCFontInfo::GetFullName(pCVar5);
    iVar4 = FUN_10005720(this_00,(ushort *)*puVar6);
    FUN_10001030((undefined4 *)(param_3 + -8));
    FUN_10001030((undefined4 *)(local_18 + -0x10));
    if (-1 < iVar4) {
      CObList::InsertBefore(local_14,p_Var9,(CObject *)param_1);
      bVar3 = true;
    }
    p_Var9 = p_Var2;
    if (bVar3) break;
LAB_100d2346:
    if (p_Var9 == (__POSITION *)0x0) break;
  }
  if (!bVar3) {
    CObList::AddTail(local_14,(CObject *)param_1);
  }
  return 1;
}

