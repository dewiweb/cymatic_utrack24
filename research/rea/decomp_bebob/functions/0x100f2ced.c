// rea decompile_all
// name: CWinApp::UpdatePrinterSelection
// address: 0x100f2ced
// body: available
// range: 0x100f2ced-0x100f2f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f2d2b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CWinApp::UpdatePrinterSelection(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CWinApp::UpdatePrinterSelection(CWinApp *this,int param_1)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 *puVar4;
  CDialog *this_00;
  undefined **local_1d8 [37];
  int local_144;
  undefined **local_fc [37];
  int local_68;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c8;
  local_8 = 0x100f2cfc;
  local_14 = 0;
  if ((param_1 != 0) || (*(HGLOBAL *)(this + 0x78) == (HGLOBAL)0x0)) {
    CPrintDialog::CPrintDialog((CPrintDialog *)local_1d8,1,0x14000c,(CWnd *)0x0);
    local_8 = 3;
    CPrintDialog::GetDefaults((CPrintDialog *)local_1d8);
    if (*(void **)(this + 0x74) != (void *)0x0) {
      AfxGlobalFree(*(void **)(this + 0x74));
    }
    if (*(void **)(this + 0x78) != (void *)0x0) {
      AfxGlobalFree(*(void **)(this + 0x78));
    }
    *(undefined4 *)(this + 0x74) = *(undefined4 *)(local_144 + 8);
    *(undefined4 *)(this + 0x78) = *(undefined4 *)(local_144 + 0xc);
    local_1d8[0] = CCommonDialog::vftable;
    this_00 = (CDialog *)local_1d8;
    goto LAB_100f2f1b;
  }
  puVar2 = GlobalLock(*(HGLOBAL *)(this + 0x78));
  if (puVar2 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if ((puVar2[3] & 1) == 0) {
    return;
  }
  CPrintDialog::CPrintDialog((CPrintDialog *)local_fc,1,0x14000c,(CWnd *)0x0);
  local_8 = 0;
  iVar3 = CPrintDialog::GetDefaults((CPrintDialog *)local_fc);
  if (iVar3 != 0) {
    if (*(int *)(local_68 + 0xc) == 0) {
      if (*(void **)(this + 0x74) != (void *)0x0) {
        AfxGlobalFree(*(void **)(this + 0x74));
      }
      AfxGlobalFree(*(void **)(this + 0x78));
      *(undefined4 *)(this + 0x74) = 0;
      *(undefined4 *)(this + 0x78) = 0;
    }
    else {
      puVar4 = (undefined4 *)CPrintDialog::GetDriverName((CPrintDialog *)local_fc);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_14 = 1;
      iVar3 = lstrcmpW((LPCWSTR)(puVar2 + *puVar2),(LPCWSTR)*puVar4);
      if (iVar3 == 0) {
        puVar4 = (undefined4 *)CPrintDialog::GetDeviceName((CPrintDialog *)local_fc);
        local_8 = 2;
        local_14 = 3;
        iVar3 = lstrcmpW((LPCWSTR)(puVar2 + puVar2[1]),(LPCWSTR)*puVar4);
        if (iVar3 != 0) goto LAB_100f2e1f;
        puVar4 = (undefined4 *)CPrintDialog::GetPortName((CPrintDialog *)local_fc);
        local_14 = 7;
        iVar3 = lstrcmpW((LPCWSTR)(puVar2 + puVar2[2]),(LPCWSTR)*puVar4);
        bVar1 = false;
        if (iVar3 != 0) goto LAB_100f2e1f;
      }
      else {
LAB_100f2e1f:
        bVar1 = true;
      }
      if ((local_14 & 4) != 0) {
        local_14 = local_14 & 0xfffffffb;
        FUN_10001030((undefined4 *)(local_20 + -0x10));
      }
      if ((local_14 & 2) != 0) {
        local_14 = local_14 & 0xfffffffd;
        FUN_10001030((undefined4 *)(local_18 + -0x10));
      }
      local_8 = 0;
      if ((local_14 & 1) != 0) {
        FUN_10001030((undefined4 *)(local_1c + -0x10));
      }
      if (bVar1) {
        if (*(void **)(this + 0x74) != (void *)0x0) {
          AfxGlobalFree(*(void **)(this + 0x74));
        }
        AfxGlobalFree(*(void **)(this + 0x78));
        *(undefined4 *)(this + 0x74) = *(undefined4 *)(local_68 + 8);
        *(undefined4 *)(this + 0x78) = *(undefined4 *)(local_68 + 0xc);
      }
      else {
        if (*(void **)(local_68 + 8) != (void *)0x0) {
          AfxGlobalFree(*(void **)(local_68 + 8));
        }
        if (*(void **)(local_68 + 0xc) != (void *)0x0) {
          AfxGlobalFree(*(void **)(local_68 + 0xc));
        }
      }
    }
  }
  local_fc[0] = CCommonDialog::vftable;
  this_00 = (CDialog *)local_fc;
LAB_100f2f1b:
  local_8 = 0xffffffff;
  CDialog::~CDialog(this_00);
  return;
}

