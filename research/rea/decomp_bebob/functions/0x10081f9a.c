// rea decompile_all
// name: CMFCToolBarImages::PrepareDrawImage
// address: 0x10081f9a
// body: available
// range: 0x10081f9a-0x10082203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10082050 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::PrepareDrawImage(struct tagAFXDrawState &,class
   CSize,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarImages::PrepareDrawImage
          (CMFCToolBarImages *this,void **param_1,int param_3,int param_4,int param_5)

{
  CMFCVisualManager *pCVar1;
  int iVar2;
  HGDIOBJ pvVar3;
  HBITMAP pHVar4;
  int iVar5;
  HDC pHVar6;
  CGdiObject *pCVar7;
  void *pvVar8;
  CWindowDC local_24 [4];
  HDC local_20;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x10081fa6;
  if (*(int *)(this + 0x88) == 0) {
    return 0;
  }
  if (DAT_10168918 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10168934);
  }
  if (param_5 == 0) {
LAB_10081fe7:
    if ((((*(int *)(this + 8) < 0x20) && (*(int *)(this + 0x90) == 0)) &&
        (pCVar1 = CMFCVisualManager::GetInstance(), *(int *)(pCVar1 + 0x70) != 0)) &&
       ((DAT_10166c28 == 0 && (DAT_10166c24 == 0)))) {
      UpdateInternalImage(this,1);
    }
  }
  else if (*(int *)(this + 8) < 0x20) {
    if (*(int *)(this + 0x8c) == 0) {
      UpdateInternalImage(this,0);
    }
    goto LAB_10081fe7;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  if (((*(HGDIOBJ *)(this + 0x8c) == (HGDIOBJ)0x0) ||
      ((4 < *(int *)(this + 8) && (*(int *)(this + 0x34) == 0)))) || (*(int *)(this + 8) == 0)) {
    param_5 = 0;
  }
  *(int *)(this + 0x28) = param_5;
  if (*(HGDIOBJ *)(this + 0x88) != (HGDIOBJ)0x0) {
    if (this == (CMFCToolBarImages *)0xffffffc0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(this + 0x44);
    }
    if (iVar2 == 0) {
      if (this == (CMFCToolBarImages *)0xffffff68) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(this + 0x9c);
      }
      if ((iVar2 == 0) && (*(int *)(this + 0xa0) == 0)) {
        if ((param_5 == 0) || (pvVar3 = *(HGDIOBJ *)(this + 0x8c), 0x1f < *(int *)(this + 8))) {
          pvVar3 = *(HGDIOBJ *)(this + 0x88);
        }
        pvVar3 = SelectObject(DAT_10168924,pvVar3);
        param_1[2] = pvVar3;
        if (pvVar3 == (HGDIOBJ)0x0) {
LAB_100820c9:
          if (DAT_10168918 != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10168934);
          }
          return 0;
        }
        if (*(int *)(this + 0x3c) != 0) {
          pHVar4 = CreateBitmap(*(int *)(this + 0x50) + 2,*(int *)(this + 0x54) + 2,1,1,(void *)0x0)
          ;
          pHVar6 = DAT_10168928;
          *param_1 = pHVar4;
          pvVar3 = SelectObject(pHVar6,pHVar4);
          param_1[1] = pvVar3;
          if ((*param_1 == (void *)0x0) || (pvVar3 == (HGDIOBJ)0x0)) {
            AfxDeleteObject(param_1);
            goto LAB_100820c9;
          }
        }
        if ((param_3 < 1) || (param_4 < 1)) {
          *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x50);
          param_4 = *(int *)(this + 0x54);
        }
        else {
          *(int *)(this + 0x60) = param_3;
        }
        *(int *)(this + 100) = param_4;
        if (*(int *)(this + 8) == 0x20) {
          iVar2 = -1;
        }
        else {
          iVar2 = *(int *)(this + 0xa4);
        }
        iVar5 = CSize::operator!=((CSize *)(this + 0x60),*(tagSIZE *)(this + 0x50));
        if ((iVar5 != 0) || (iVar2 != -1)) {
          CWindowDC::CWindowDC(local_24,(CWnd *)0x0);
          local_8 = 0;
          iVar2 = CSize::operator!=((CSize *)(this + 0x60),*(tagSIZE *)(this + 0x50));
          *(int *)(this + 0x1c) = iVar2;
          pHVar6 = CreateCompatibleDC((HDC)0x0);
          CDC::Attach((CDC *)(this + 0x40),pHVar6);
          pHVar4 = CreateCompatibleBitmap
                             (local_20,*(int *)(this + 0x50) + 2,*(int *)(this + 0x54) + 2);
          CMenu::Attach((CMenu *)(this + 0x98),(HMENU__ *)pHVar4);
          if ((CMenu *)(this + 0x98) == (CMenu *)0x0) {
            pvVar8 = (void *)0x0;
          }
          else {
            pvVar8 = *(void **)(this + 0x9c);
          }
          pCVar7 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x44),pvVar8);
          *(CGdiObject **)(this + 0xa0) = pCVar7;
          if (pCVar7 == (CGdiObject *)0x0) goto LAB_10082050;
          local_8 = 0xffffffff;
          CWindowDC::~CWindowDC(local_24);
        }
        return 1;
      }
    }
  }
LAB_10082050:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

