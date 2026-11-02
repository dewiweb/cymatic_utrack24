// rea decompile_all
// name: FUN_10005f00
// address: 0x10005f00
// body: available
// range: 0x10005f00-0x10005fc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_10005f00(int param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  int iVar3;
  HDEVINFO pvVar4;
  
  uVar2 = FUN_10002000(&DAT_10164a28,*(ulong *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  iVar3 = FUN_10004550(&DAT_10164a28);
  if (iVar3 != 0) {
    return uVar2;
  }
  pvVar4 = SetupDiGetClassDevsA((GUID *)(param_1 + 0xc),(PCSTR)0x0,(HWND)0x0,0x12);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x94) + 8))(0,pvVar4,(GUID *)(param_1 + 0xc));
  if (iVar3 != 0) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x94) + 0x10))(1,100);
    if (iVar3 != 0) {
      return 0xe0000001;
    }
  }
  FUN_100049e0((void *)(param_1 + 0x98),FUN_10005990);
  puVar1 = *(ulong **)(param_1 + 0x58);
  FUN_10004b20((void *)(param_1 + 0x98),*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  return 0;
}

