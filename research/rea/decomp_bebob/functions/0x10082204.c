// rea decompile_all
// name: FID_conflict:ExtractIconW
// address: 0x10082204
// body: available
// range: 0x10082204-0x100822ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: struct HICON__ * __thiscall CMFCToolBarImages::ExtractIconA(int)
    public: struct HICON__ * __thiscall CMFCToolBarImages::ExtractIconW(int)
   
   Library: Visual Studio 2010 Release */

HICON FID_conflict_ExtractIconW(HINSTANCE hInst,LPCWSTR lpszExeFileName,UINT nIconIndex)

{
  int iVar1;
  CGdiObject *pCVar2;
  HBITMAP__ *pHVar3;
  HICON pHVar4;
  int in_ECX;
  ulong uVar5;
  uint uVar6;
  LPCWSTR in_stack_ffffffd4;
  UINT in_stack_ffffffd8;
  CImageList local_1c [4];
  _IMAGELIST *local_18;
  HANDLE local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10082210;
  if (((int)hInst < 0) || (*(int *)(in_ECX + 4) <= (int)hInst)) {
    pHVar4 = (HICON)0x0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 8);
    if (iVar1 == 8) {
      uVar6 = 9;
    }
    else if (iVar1 == 0x10) {
      uVar6 = 0x11;
    }
    else if (iVar1 == 0x18) {
      uVar6 = 0x19;
    }
    else if (iVar1 == 0x20) {
      uVar6 = 0x20;
    }
    else {
      uVar6 = iVar1 != 0x20 | 4;
    }
    CImageList::CImageList(local_1c);
    local_8 = 0;
    CImageList::Create(local_1c,*(int *)(in_ECX + 0x50),*(int *)(in_ECX + 0x54),uVar6,0,0);
    local_14[0] = CopyImage(*(HANDLE *)(in_ECX + 0x88),0,0,0,0x2000);
    uVar5 = *(ulong *)(in_ECX + 0xa4);
    if (*(ulong *)(in_ECX + 0xa4) == 0xffffffff) {
      uVar5 = DAT_10166ab4;
    }
    pCVar2 = CGdiObject::FromHandle(local_14[0]);
    if (pCVar2 == (CGdiObject *)0x0) {
      pHVar3 = (HBITMAP__ *)0x0;
    }
    else {
      pHVar3 = *(HBITMAP__ **)(pCVar2 + 4);
    }
    AfxImageList_AddMasked(local_18,pHVar3,uVar5);
    AfxDeleteObject(local_14);
    pHVar4 = FID_conflict_ExtractIconW(hInst,in_stack_ffffffd4,in_stack_ffffffd8);
    local_8 = 0xffffffff;
    CImageList::~CImageList(local_1c);
  }
  return pHVar4;
}

