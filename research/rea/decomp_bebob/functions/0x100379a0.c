// rea decompile_all
// name: CMenuImages::Initialize
// address: 0x100379a0
// body: available
// range: 0x100379a0-0x10037b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: static int __stdcall CMenuImages::Initialize(void)
   
   Library: Visual Studio 2010 Release */

int CMenuImages::Initialize(void)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 uVar2;
  HINSTANCE__ *pHVar3;
  uint uVar4;
  int iVar5;
  double local_c;
  
  if (DAT_101679b4 == 0) {
    if (DAT_10167a40 == 0) {
      iVar5 = 0;
      DAT_10167a0c = 9;
      DAT_101679b4 = 1;
      DAT_10167a08 = 9;
      pHVar3 = (HINSTANCE__ *)0x0;
      iVar1 = AFX_GLOBAL_DATA::Is32BitIcons((AFX_GLOBAL_DATA *)&DAT_10166aa0);
      iVar5 = CMFCToolBarImages::Load
                        ((CMFCToolBarImages *)&DAT_101679b8,(-(uint)(iVar1 != 0) & 0x3b7) + 0x3f01,
                         pHVar3,iVar5);
      iVar1 = 0;
      if (iVar5 != 0) {
        if (DAT_10168920 != 0) {
          CMFCToolBarImages::Mirror((CMFCToolBarImages *)&DAT_101679b8);
        }
        CMFCToolBarImages::SetTransparentColor((CMFCToolBarImages *)&DAT_101679b8,0xff00ff);
        CreateCopy((CMFCToolBarImages *)&DAT_10167bd8,0x808080);
        CreateCopy((CMFCToolBarImages *)&DAT_10167ac8,0x484848);
        CreateCopy((CMFCToolBarImages *)&DAT_10167ce8,0xc0c0c0);
        CreateCopy((CMFCToolBarImages *)&DAT_10167df8,0xffffff);
        CreateCopy((CMFCToolBarImages *)&DAT_10167f08,0);
        if (DAT_10167a40 != 0) {
          if (DAT_10166c84 == 0) {
            local_c = 1.0;
          }
          else {
            local_c = _DAT_10166c7c;
          }
          if (local_c != 1.0) {
            uVar2 = SUB84(local_c,0);
            uVar4 = (uint)((ulonglong)local_c >> 0x20);
            FUN_100823f8((CMFCToolBarImages *)&DAT_101679b8,extraout_EDX,uVar2,uVar4);
            FUN_100823f8((CMFCToolBarImages *)&DAT_10167bd8,extraout_EDX_00,uVar2,uVar4);
            FUN_100823f8((CMFCToolBarImages *)&DAT_10167ac8,extraout_EDX_01,uVar2,uVar4);
            FUN_100823f8((CMFCToolBarImages *)&DAT_10167ce8,extraout_EDX_02,uVar2,uVar4);
            FUN_100823f8((CMFCToolBarImages *)&DAT_10167df8,extraout_EDX_03,uVar2,uVar4);
            FUN_100823f8((CMFCToolBarImages *)&DAT_10167f08,extraout_EDX_04,uVar2,uVar4);
          }
        }
        iVar1 = 1;
      }
      DAT_101679b4 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

