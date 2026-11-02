// rea decompile_all
// name: OnCreate
// address: 0x100a5b5e
// body: available
// range: 0x100a5b5e-0x100a5c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCOutlookBarTabCtrl::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCOutlookBarTabCtrl::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Release */

void __fastcall OnCreate(CWnd *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar1 = OnCreate(param_1);
  if (iVar1 != -1) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    (**(code **)(*(int *)(param_1 + 0xf48) + 0x160))
              (&PTR_1011d390,0x40000000,&local_18,param_1,0xffffffff);
    CMFCButton::SetStdImage((CMFCButton *)(param_1 + 0xf48),0x18,0,0);
    CMFCButton::SetAutorepeatMode((CMFCButton *)(param_1 + 0xf48),100);
    (**(code **)(*(int *)(param_1 + 0x1698) + 0x160))
              (&PTR_1011d390,0x40000000,&local_18,param_1,0xffffffff);
    CMFCButton::SetStdImage((CMFCButton *)(param_1 + 0x1698),0xd,0,0);
    CMFCButton::SetAutorepeatMode((CMFCButton *)(param_1 + 0x1698),100);
    *(undefined4 *)(param_1 + 0xd68) = 0;
    (**(code **)(*(int *)(param_1 + 0x260) + 0x324))(param_1,0x800,0x50402808,0,0,0,0,0xe800);
    iVar1 = *(int *)(param_1 + 0x260);
    *(undefined4 *)(param_1 + 0xda0) = 0;
    *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_1 + 0x20);
    uVar2 = (**(code **)(iVar1 + 0x1bc))();
    (**(code **)(iVar1 + 0x1e0))(uVar2 & 0xffbff0ff);
    *(undefined4 *)(param_1 + 0xda8) = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

