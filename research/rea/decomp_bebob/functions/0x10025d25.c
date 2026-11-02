// rea decompile_all
// name: FUN_10025d25
// address: 0x10025d25
// body: available
// range: 0x10025d25-0x10025ead inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_10025d25(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  ulonglong uVar3;
  
  *(undefined4 *)((int)this + 0xbbc) = param_5;
  *(undefined4 *)((int)this + 0xba4) = param_3;
  *(undefined4 *)((int)this + 0xba8) = param_4;
  *(undefined4 *)((int)this + 0xbb4) = param_3;
  *(undefined4 *)((int)this + 3000) = param_4;
  *(undefined4 *)((int)this + 0xb9c) = param_1;
  *(undefined4 *)((int)this + 0xbac) = param_1;
  *(undefined4 *)((int)this + 0xba0) = param_2;
  *(undefined4 *)((int)this + 0xbb0) = param_2;
  *(undefined4 *)((int)this + 0x2f4) = param_3;
  *(undefined4 *)((int)this + 0x2f8) = param_4;
  *(undefined4 *)((int)this + 0x93c) = *(undefined4 *)((int)this + 0xba4);
  *(undefined4 *)((int)this + 0x940) = *(undefined4 *)((int)this + 0xba8);
  *(undefined4 *)((int)this + 0x400) = *(undefined4 *)((int)this + 0xba4);
  *(undefined4 *)((int)this + 0x404) = *(undefined4 *)((int)this + 0xba8);
  *(undefined4 *)((int)this + 0x50c) = *(undefined4 *)((int)this + 0xba4);
  *(undefined4 *)((int)this + 0x510) = *(undefined4 *)((int)this + 0xba8);
  *(undefined4 *)((int)this + 0xa48) = *(undefined4 *)((int)this + 0xba4);
  *(undefined4 *)((int)this + 0xa4c) = *(undefined4 *)((int)this + 0xba8);
  uVar3 = FUN_100f8660(*(undefined4 *)((int)this + 0xba4),*(undefined4 *)((int)this + 0xba8));
  uVar1 = (undefined4)uVar3;
  uVar3 = FUN_100f8660(extraout_ECX,(int)(uVar3 >> 0x20));
  uVar2 = (undefined4)uVar3;
  *(undefined4 *)((int)this + 0x618) = uVar1;
  *(undefined4 *)((int)this + 0x61c) = uVar2;
  *(undefined4 *)((int)this + 0x724) = uVar1;
  *(undefined4 *)((int)this + 0x728) = uVar2;
  *(undefined4 *)((int)this + 0x830) = uVar1;
  *(undefined4 *)((int)this + 0x834) = uVar2;
  if (DAT_10166e5c != 0) {
    uVar3 = FUN_100f8660(uVar1,(int)(uVar3 >> 0x20));
    *(int *)((int)this + 0xbac) = (int)uVar3;
    uVar3 = FUN_100f8660(extraout_ECX_00,(int)(uVar3 >> 0x20));
    *(int *)((int)this + 0xbb0) = (int)uVar3;
    uVar3 = FUN_100f8660(extraout_ECX_01,(int)(uVar3 >> 0x20));
    *(int *)((int)this + 0xbb4) = (int)uVar3;
    uVar3 = FUN_100f8660(extraout_ECX_02,(int)(uVar3 >> 0x20));
    *(int *)((int)this + 3000) = (int)uVar3;
  }
  return;
}

