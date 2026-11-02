// rea decompile_all
// name: CMFCScanliner::attach
// address: 0x10080946
// body: available
// range: 0x10080946-0x100809d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCScanliner::attach(unsigned char *,class CRect const &,unsigned
   int,unsigned int,unsigned char,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCScanliner::attach
          (CMFCScanliner *this,uchar *param_1,CRect *param_2,uint param_3,uint param_4,uchar param_5
          ,int param_6)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  uchar *puVar4;
  uint uVar5;
  
  empty(this);
  iVar1 = *(int *)param_2;
  iVar2 = *(int *)(param_2 + 4);
  uVar5 = *(int *)(param_2 + 8) - iVar1;
  if (param_4 == 0) {
    param_4 = uVar5;
  }
  if (param_3 == 0) {
    param_3 = (*(int *)(param_2 + 0xc) - iVar2) + iVar2;
  }
  *(int *)(this + 0x18) = *(int *)(param_2 + 0xc) - iVar2;
  *(uint *)(this + 0x1c) = param_5 * uVar5;
  *(uint *)(this + 0xc) = param_4;
  *(uint *)(this + 0x20) = param_4;
  if (param_6 != 0) {
    *(uint *)(this + 0x20) = -param_4;
  }
  *(uint *)(this + 0x28) = param_3;
  this[0x24] = (CMFCScanliner)param_5;
  *(int *)(this + 0x10) = iVar2;
  *(int *)(this + 0x14) = iVar1;
  puVar3 = _begin(this,param_1);
  *(uchar **)(this + 4) = puVar3;
  puVar4 = _end(this,param_1);
  *(uchar **)this = puVar3;
  *(uchar **)(this + 8) = puVar4;
  return;
}

