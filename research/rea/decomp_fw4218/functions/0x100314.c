// rea decompile_all
// name: FUN_00100314
// address: 0x100314
// body: available
// range: 0x100314-0x100417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100414 to 0x1f06d4 FUN_001f06d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00100408) */

void FUN_00100314(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = DAT_00100418;
  FUN_001f00bc();
  iVar5 = *(int *)(*(int *)(param_2 + 0x10) + 8);
  if (iVar5 != *(int *)(param_2 + 0x10)) {
    do {
      iVar3 = *(int *)(param_1 + 0x1ec);
      iVar2 = iVar3;
      iVar4 = *(int *)(iVar3 + 4);
      while (iVar4 != 0) {
        if (*(uint *)(iVar4 + 0x10) < *(uint *)(iVar5 + 0x10)) {
          iVar4 = *(int *)(iVar4 + 0xc);
        }
        else {
          iVar2 = iVar4;
          iVar4 = *(int *)(iVar4 + 8);
        }
      }
      if ((iVar2 != iVar3) && (*(uint *)(iVar2 + 0x10) <= *(uint *)(iVar5 + 0x10))) {
        iVar3 = iVar2;
      }
      if (iVar3 != *(int *)(param_1 + 0x1ec)) {
        *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x14) = param_3;
      }
      iVar2 = *(int *)(iVar5 + 0xc);
      if (*(int *)(iVar5 + 0xc) == 0) {
        iVar2 = *(int *)(iVar5 + 4);
        while (iVar4 = iVar2, iVar5 == *(int *)(iVar4 + 0xc)) {
          iVar5 = iVar4;
          iVar2 = *(int *)(iVar4 + 4);
        }
        if (*(int *)(iVar5 + 0xc) != iVar4) {
          iVar5 = iVar4;
        }
      }
      else {
        do {
          iVar5 = iVar2;
          iVar2 = *(int *)(iVar5 + 8);
        } while (*(int *)(iVar5 + 8) != 0);
      }
    } while (iVar5 != *(int *)(param_2 + 0x10));
  }
  FUN_001f06d4(uVar1);
  return;
}

