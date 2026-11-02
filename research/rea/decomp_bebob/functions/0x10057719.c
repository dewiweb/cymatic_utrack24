// rea decompile_all
// name: PreCreateWindow
// address: 0x10057719
// body: available
// range: 0x10057719-0x10057795 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CControlBar::PreCreateWindow(struct tagCREATESTRUCTA &)
    public: virtual int __thiscall CControlBar::PreCreateWindow(struct tagCREATESTRUCTW &)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall PreCreateWindow(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = PreCreateWindow(this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x4000000;
  uVar1 = *(uint *)((int)this + 0xa4);
  if ((char)uVar1 < '\0') {
    return 1;
  }
  uVar3 = uVar1 & 0xff00;
  if (uVar3 != 0x1400) {
    if (uVar3 == 0x2800) {
      uVar3 = 0x200;
      goto LAB_1005777b;
    }
    if (uVar3 != 0x4100) {
      if (uVar3 != 0x8200) {
        return 1;
      }
      uVar3 = 0x800;
      goto LAB_1005777b;
    }
  }
  uVar3 = 0xa00;
LAB_1005777b:
  *(uint *)((int)this + 0xa4) = uVar1 & 0xfffff0ff | uVar3 | 0x80;
  return 1;
}

