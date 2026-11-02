// rea decompile_all
// name: CMFCToolBar::LoadBitmapEx
// address: 0x1002c09c
// body: available
// range: 0x1002c09c-0x1002c2f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBar::LoadBitmapEx(class CMFCToolBarInfo &,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBar::LoadBitmapEx(CMFCToolBar *this,CMFCToolBarInfo *param_1,int param_2)

{
  int iVar1;
  
  *(int *)(this + 0xb04) = param_2;
  if (param_2 == 0) {
    iVar1 = CMFCToolBarImages::Load
                      ((CMFCToolBarImages *)&DAT_10166f30,*(uint *)(param_1 + 4),(HINSTANCE__ *)0x0,
                       1);
    if (iVar1 != 0) {
      iVar1 = CMFCToolBarImages::GetResourceOffset
                        ((CMFCToolBarImages *)&DAT_10166f30,*(uint *)(param_1 + 4));
      *(int *)(this + 0xb90) = iVar1;
      if (*(uint *)param_1 == 0) {
        if (DAT_10166e60 != 0) {
          CMFCToolBarImages::CopyTo
                    ((CMFCToolBarImages *)&DAT_10166f30,(CMFCToolBarImages *)&DAT_10167060);
          CMFCToolBarImages::GrayImages((CMFCToolBarImages *)&DAT_10167060,DAT_10166e64);
        }
      }
      else {
        iVar1 = CMFCToolBarImages::Load
                          ((CMFCToolBarImages *)&DAT_10167060,*(uint *)param_1,(HINSTANCE__ *)0x0,1)
        ;
        if (iVar1 == 0) {
          return 0;
        }
      }
      if (((((*(uint *)(param_1 + 0x18) == 0) ||
            (iVar1 = CMFCToolBarImages::Load
                               ((CMFCToolBarImages *)&DAT_10167170,*(uint *)(param_1 + 0x18),
                                (HINSTANCE__ *)0x0,1), iVar1 != 0)) &&
           ((*(uint *)(param_1 + 8) == 0 ||
            (iVar1 = CMFCToolBarImages::Load
                               ((CMFCToolBarImages *)&DAT_10167280,*(uint *)(param_1 + 8),
                                (HINSTANCE__ *)0x0,1), iVar1 != 0)))) &&
          (((*(uint *)(param_1 + 0x1c) == 0 ||
            (iVar1 = CMFCToolBarImages::Load
                               ((CMFCToolBarImages *)&DAT_10167390,*(uint *)(param_1 + 0x1c),
                                (HINSTANCE__ *)0x0,1), iVar1 != 0)) &&
           ((*(uint *)(param_1 + 0x10) == 0 ||
            (iVar1 = CMFCToolBarImages::Load
                               ((CMFCToolBarImages *)&DAT_101674a0,*(uint *)(param_1 + 0x10),
                                (HINSTANCE__ *)0x0,1), iVar1 != 0)))))) &&
         ((*(uint *)(param_1 + 0xc) == 0 ||
          (iVar1 = CMFCToolBarImages::Load
                             ((CMFCToolBarImages *)&DAT_101675b0,*(uint *)(param_1 + 0xc),
                              (HINSTANCE__ *)0x0,1), iVar1 != 0)))) {
        if (*(uint *)(param_1 + 0x14) == 0) {
          return 1;
        }
        iVar1 = CMFCToolBarImages::Load
                          ((CMFCToolBarImages *)&DAT_101676c0,*(uint *)(param_1 + 0x14),
                           (HINSTANCE__ *)0x0,1);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  else {
    iVar1 = CMFCToolBarImages::Load
                      ((CMFCToolBarImages *)(this + 0x2a4),*(uint *)(param_1 + 4),(HINSTANCE__ *)0x0
                       ,1);
    if (iVar1 != 0) {
      if (*(uint *)param_1 == 0) {
        if (DAT_10166e60 != 0) {
          CMFCToolBarImages::CopyTo
                    ((CMFCToolBarImages *)(this + 0x2a4),(CMFCToolBarImages *)(this + 0x3b0));
          CMFCToolBarImages::GrayImages((CMFCToolBarImages *)(this + 0x3b0),DAT_10166e64);
        }
      }
      else {
        iVar1 = CMFCToolBarImages::Load
                          ((CMFCToolBarImages *)(this + 0x3b0),*(uint *)param_1,(HINSTANCE__ *)0x0,1
                          );
        if (iVar1 == 0) {
          return 0;
        }
      }
      if ((((((*(uint *)(param_1 + 8) == 0) ||
             (iVar1 = CMFCToolBarImages::Load
                                ((CMFCToolBarImages *)(this + 0x4bc),*(uint *)(param_1 + 8),
                                 (HINSTANCE__ *)0x0,1), iVar1 != 0)) &&
            ((*(uint *)(param_1 + 0x10) == 0 ||
             (iVar1 = CMFCToolBarImages::Load
                                ((CMFCToolBarImages *)(this + 0x5c8),*(uint *)(param_1 + 0x10),
                                 (HINSTANCE__ *)0x0,1), iVar1 != 0)))) &&
           ((*(uint *)(param_1 + 0xc) == 0 ||
            (iVar1 = CMFCToolBarImages::Load
                               ((CMFCToolBarImages *)(this + 0x6d4),*(uint *)(param_1 + 0xc),
                                (HINSTANCE__ *)0x0,1), iVar1 != 0)))) &&
          ((*(uint *)(param_1 + 0x14) == 0 ||
           (iVar1 = CMFCToolBarImages::Load
                              ((CMFCToolBarImages *)(this + 0x7e0),*(uint *)(param_1 + 0x14),
                               (HINSTANCE__ *)0x0,1), iVar1 != 0)))) &&
         (((*(uint *)(param_1 + 0x18) == 0 ||
           (iVar1 = CMFCToolBarImages::Load
                              ((CMFCToolBarImages *)(this + 0x8ec),*(uint *)(param_1 + 0x18),
                               (HINSTANCE__ *)0x0,1), iVar1 != 0)) &&
          ((*(int *)(param_1 + 0x1c) == 0 ||
           (iVar1 = CMFCToolBarImages::Load
                              ((CMFCToolBarImages *)(this + 0x8ec),*(uint *)(param_1 + 0x18),
                               (HINSTANCE__ *)0x0,1), iVar1 != 0)))))) {
        return 1;
      }
    }
  }
  return 0;
}

