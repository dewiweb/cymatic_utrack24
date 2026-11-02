// rea decompile_all
// name: FUN_000f1cac
// address: 0xf1cac
// body: available
// range: 0xf1cac-0xf1cff inclusive
// range: 0xf1de0-0xf1de7 inclusive
// range: 0xf1e80-0xf1ea3 inclusive
// range: 0xf1efc-0xf2083 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf1f60 to 0x1a43c <EXTERNAL>::thunk_EXT_FUN_0040010c (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

void FUN_000f1cac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 auStack_f6 [6];
  undefined2 local_f0;
  undefined2 local_ee;
  undefined1 auStack_ec [8];
  undefined1 auStack_e4 [4];
  undefined2 local_e0;
  undefined1 auStack_de [2];
  undefined1 auStack_dc [191];
  undefined1 local_1d;
  
  iVar1 = *(int *)(param_1 + 0xbc8);
  uVar2 = FUN_0017bfc0();
  uVar3 = (uint)*(ushort *)(param_1 + 8);
  if (*(char *)(param_1 + 0xbe6) != '\0') {
    if ((*(ushort *)(param_1 + 8) & 0xfff) == 0) {
      switch((int)uVar3 >> 0xc) {
      case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        return;
      }
    }
    return;
  }
  if (uVar3 == 0x3000) {
    *(undefined4 *)(param_1 + 0xbec) = uVar2;
    FUN_000f23d8(param_1,0xc000,0,0,0);
    FUN_0017b9f8(0x32);
    piVar4 = *(int **)(param_1 + 0x94);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4,1);
    }
  }
  else {
    if (uVar3 < 0x3001) {
      if (uVar3 == 0) {
        if (*(char *)(param_1 + 0xbe4) != '\0') {
          return;
        }
        *(undefined4 *)(param_1 + 0xbec) = uVar2;
        *(undefined1 *)(param_1 + 0xbe4) = 1;
        *(undefined1 *)(param_1 + 0xbf8) = 0;
                    /* WARNING: Could not recover jumptable at 0x000f1f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(int **)(param_1 + 0x8c) + 0x10))(*(int **)(param_1 + 0x8c),1);
        return;
      }
      if (uVar3 == 0x1000) {
        *(undefined4 *)(param_1 + 0xbec) = uVar2;
        *(undefined1 *)(param_1 + 0xbf8) = 0;
        return;
      }
      bVar5 = uVar3 == 0x2000;
      if (bVar5) {
        uVar3 = (uint)*(byte *)(param_1 + 0xbe4);
      }
      if (!bVar5 || uVar3 != 1) {
        return;
      }
      *(undefined4 *)(param_1 + 0xbec) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000f1ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x8c) + 8))
                (*(int **)(param_1 + 0x8c),iVar1 + 4,*(undefined2 *)(param_1 + 10));
      return;
    }
    if (uVar3 != 0x4000) {
      if (uVar3 != 0x7000) {
        return;
      }
      *(undefined4 *)(param_1 + 0xbec) = uVar2;
      thunk_EXT_FUN_0040010c(param_1 + 0x6c);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xbec) = uVar2;
  FUN_000038a0(&local_f8,0xdc);
  piVar4 = *(int **)(param_1 + 0x94);
  uVar2 = 1;
  local_f8 = 0;
  if ((piVar4 != (int *)0x0) &&
     (iVar1 = (**(code **)(*piVar4 + 0xc))
                        (piVar4,auStack_ec,auStack_e4,auStack_de,auStack_dc,auStack_f6), iVar1 != 0)
     ) {
    local_f0 = (undefined2)DAT_000f2084;
    local_f8 = 1;
    uVar2 = 0xdc;
    local_ee = (undefined2)DAT_000f2088;
    local_e0 = 0xc0;
    local_1d = 0;
  }
  local_f7 = 0;
  FUN_000f23d8(param_1,0xe000,&local_f8,uVar2,0);
  return;
}

