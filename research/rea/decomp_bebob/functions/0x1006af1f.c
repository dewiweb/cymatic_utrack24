// rea decompile_all
// name: CBasePane::AddPane
// address: 0x1006af1f
// body: available
// range: 0x1006af1f-0x1006aff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CBasePane::AddPane(class CBasePane *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CBasePane::AddPane(CBasePane *this,CBasePane *param_1)

{
  CObject *this_00;
  int iVar1;
  
  this_00 = (CObject *)(**(code **)(*(int *)this + 0x198))();
  if ((this_00 != (CObject *)0x0) && (DAT_10160f6c == 0)) {
    iVar1 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c);
    if (iVar1 == 0) {
      iVar1 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48);
      if (iVar1 == 0) {
        iVar1 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_COleIPFrameWndEx_1012089c);
        if (iVar1 == 0) {
          iVar1 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101204e8);
          if (iVar1 == 0) {
            iVar1 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c);
            if (iVar1 == 0) {
              iVar1 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_COleCntrFrameWndEx_10129fbc)
              ;
              if (iVar1 != 0) {
                COleCntrFrameWndEx::AddPane((COleCntrFrameWndEx *)this_00,param_1,1);
              }
            }
            else {
              CMDIChildWndEx::AddPane((CMDIChildWndEx *)this_00,param_1,1);
            }
          }
          else {
            COleDocIPFrameWndEx::AddPane((COleDocIPFrameWndEx *)this_00,param_1,1);
          }
        }
        else {
          COleIPFrameWndEx::AddPane((COleIPFrameWndEx *)this_00,param_1,1);
        }
      }
      else {
        ::AddPane(this_00,param_1,1);
      }
    }
    else {
      ::AddPane(this_00,param_1,1);
    }
  }
  return;
}

