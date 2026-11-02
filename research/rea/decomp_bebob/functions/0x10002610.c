// rea decompile_all
// name: FUN_10002610
// address: 0x10002610
// body: available
// range: 0x10002610-0x100026cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10002610(void *this,uint param_1,char *param_2)

{
  void *_Src;
  size_t _Size;
  int iVar1;
  
  _Src = *(void **)((int)this + 4);
  if ((_Src == (void *)0x0) || (*(uint *)((int)this + 8) < param_1)) {
    _Size = *(size_t *)((int)this + 8);
    if (param_1 < 0x40) {
      *(undefined4 *)((int)this + 8) = 0x3f;
    }
    else if (param_1 < 0x80) {
      *(undefined4 *)((int)this + 8) = 0x7f;
    }
    else if (param_1 < 0x100) {
      *(undefined4 *)((int)this + 8) = 0xff;
    }
    else if (param_1 < 0x200) {
      *(undefined4 *)((int)this + 8) = 0x1ff;
    }
    else {
      *(uint *)((int)this + 8) = param_1;
    }
    iVar1 = FUN_100085c4(*(int *)((int)this + 8) + 1);
    *(int *)((int)this + 4) = iVar1;
    *(undefined1 *)(iVar1 + *(int *)((int)this + 8)) = 0;
    if (param_2 != (char *)0x0) {
      _strncpy(*(char **)((int)this + 4),param_2,*(size_t *)((int)this + 8));
      FUN_100085b9(_Src);
      return;
    }
    if (_Src != (void *)0x0) {
      FID_conflict__memcpy(*(void **)((int)this + 4),_Src,_Size);
    }
    FUN_100085b9(_Src);
  }
  return;
}

