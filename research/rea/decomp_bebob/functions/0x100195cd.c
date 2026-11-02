// rea decompile_all
// name: CMemDC::~CMemDC
// address: 0x100195cd
// body: available
// range: 0x100195cd-0x1001969c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual __thiscall CMemDC::~CMemDC(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMemDC::~CMemDC(CMemDC *this)

{
  int iVar1;
  void *pvVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  *(undefined ***)this = vftable;
  local_8 = 1;
  if (*(int *)(this + 0xc) == 0) {
    if (*(int *)(this + 8) != 0) {
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      iVar1 = (**(code **)(**(int **)(this + 4) + 0x50))(&local_24);
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          local_24 = *(int *)(this + 0x2c);
          local_20 = *(int *)(this + 0x30);
          local_1c = *(int *)(this + 0x34);
          local_18 = *(int *)(this + 0x38);
        }
        CDC::BitBlt(*(CDC **)(this + 4),local_24,local_20,local_1c - local_24,local_18 - local_20,
                    (CDC *)(this + 0x10),local_24,local_20,0xcc0020);
      }
      if (*(int *)(this + 0x28) == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = *(void **)(*(int *)(this + 0x28) + 4);
      }
      CDC::SelectGdiObject(*(HDC__ **)(this + 0x14),pvVar2);
    }
  }
  else {
    CDC::Detach((CDC *)(this + 0x10));
    (*DAT_10166ca8)(*(undefined4 *)(this + 0xc),1);
  }
  local_8 = local_8 & 0xffffff00;
  *(undefined ***)(this + 0x20) = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x20));
  local_8 = 0xffffffff;
  CDC::~CDC((CDC *)(this + 0x10));
  FUN_100f90cf();
  return;
}

