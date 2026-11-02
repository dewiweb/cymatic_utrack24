// rea decompile_all
// name: CMFCControlContainer::ReSubclassControl
// address: 0x1001a986
// body: available
// range: 0x1001a986-0x1001aa79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a9ce to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001aa53 to 0x1000904c FUN_1000904c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCControlContainer::ReSubclassControl(struct HWND__ *,unsigned
   short,class CWnd &)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCControlContainer::ReSubclassControl
          (CMFCControlContainer *this,HWND__ *param_1,ushort param_2,CWnd *param_3)

{
  int iVar1;
  HWND__ *pHVar2;
  CObject *this_00;
  int iVar3;
  int iVar4;
  uchar *local_c;
  ulong local_8;
  
  if (param_1 != (HWND__ *)0x0) {
    iVar3 = *(int *)(this + 0x10);
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        if ((iVar4 < 0) || (iVar3 <= iVar4)) {
LAB_1001a9ce:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        iVar1 = *(int *)(*(int *)(this + 0xc) + iVar4 * 4);
        pHVar2 = (HWND__ *)0x0;
        if (iVar1 != 0) {
          pHVar2 = *(HWND__ **)(iVar1 + 0x20);
        }
        if (pHVar2 == param_1) {
          if (iVar4 == -1) {
            return 0;
          }
          if (iVar4 < iVar3) {
            this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_DAT_1011df44,
                                         *(CObject **)(*(int *)(this + 0xc) + iVar4 * 4));
            if (this_00 == (CObject *)0x0) {
              return 0;
            }
            if (*(int *)(this_00 + 0x20) == 0) {
              return 0;
            }
            local_8 = 0;
            local_c = (uchar *)0x0;
            GetControlData(this,param_2,&local_8,&local_c);
            if (iVar4 < *(int *)(this + 0x10)) {
              *(undefined4 *)(iVar4 * 4 + *(int *)(this + 0xc)) = 0;
              PreUnsubclassControl(this,(CWnd *)this_00);
              CWnd::UnsubclassWindow((CWnd *)this_00);
              (**(code **)(*(int *)this_00 + 4))(1);
              iVar3 = CWnd::SubclassWindow(param_3,param_1);
              if (iVar3 != 0) {
                if (local_8 != 0) {
                  SendMessageW(*(HWND *)(param_3 + 0x20),0x37c,local_8,(LPARAM)local_c);
                }
                return 1;
              }
                    /* WARNING: Subroutine does not return */
              FUN_1000904c();
            }
          }
          goto LAB_1001a9ce;
        }
        iVar4 = iVar4 + 1;
        if (iVar3 <= iVar4) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

