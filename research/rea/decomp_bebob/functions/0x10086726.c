// rea decompile_all
// name: CMFCToolBarButton::CreateFromOleData
// address: 0x10086726
// body: available
// range: 0x10086726-0x10086818 inclusive
// range: 0x10086839-0x10086842 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10086740 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static class CMFCToolBarButton * __stdcall CMFCToolBarButton::CreateFromOleData(class
   COleDataObject *)
   
   Library: Visual Studio 2010 Release */

CMFCToolBarButton * CMFCToolBarButton::CreateFromOleData(COleDataObject *param_1)

{
  ushort uVar1;
  int iVar2;
  CFile *pCVar3;
  CRuntimeClass *this;
  CMFCToolBarButton *this_00;
  CArchive local_6c [84];
  CObject *local_18;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x10086732;
  if (param_1 != (COleDataObject *)0x0) {
    iVar2 = COleDataObject::IsDataAvailable(param_1,DAT_1016899c,(tagFORMATETC *)0x0);
    if (iVar2 != 0) {
      this_00 = (CMFCToolBarButton *)0x0;
      local_18 = (CObject *)0x0;
      local_8 = 0;
      uVar1 = GetClipboardFormat();
      pCVar3 = COleDataObject::GetFileData(param_1,uVar1,(tagFORMATETC *)0x0);
      if (pCVar3 == (CFile *)0x0) {
        this_00 = (CMFCToolBarButton *)0x0;
      }
      else {
        CArchive::CArchive(local_6c,pCVar3,1,0x1000,(void *)0x0);
        local_8 = CONCAT31(local_8._1_3_,1);
        this = CArchive::ReadClass(local_6c,(CRuntimeClass *)0x0,(uint *)0x0,(ulong *)0x0);
        if (this == (CRuntimeClass *)0x0) goto LAB_10086740;
        if (this != (CRuntimeClass *)0x0) {
          this_00 = (CMFCToolBarButton *)CRuntimeClass::CreateObject(this);
          local_18 = (CObject *)this_00;
          if (this_00 == (CMFCToolBarButton *)0x0) goto LAB_10086740;
          if (this_00 != (CMFCToolBarButton *)0x0) {
            iVar2 = CObject::IsKindOf((CObject *)this_00,
                                      (CRuntimeClass *)&PTR_s_CMFCToolBarButton_1016154c);
            if (iVar2 == 0) {
              (**(code **)(*(int *)this_00 + 4))(1);
              this_00 = (CMFCToolBarButton *)0x0;
              local_18 = (CObject *)0x0;
            }
            else {
              (**(code **)(*(int *)this_00 + 8))(local_6c);
            }
          }
        }
        CArchive::Close(local_6c);
        (**(code **)(*(int *)pCVar3 + 4))(1);
        local_8 = local_8 & 0xffffff00;
        CArchive::~CArchive(local_6c);
      }
      return this_00;
    }
  }
LAB_10086740:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

