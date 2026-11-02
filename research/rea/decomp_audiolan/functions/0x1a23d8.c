// rea decompile_all
// name: FUN_001a23d8
// address: 0x1a23d8
// body: available
// range: 0x1a23d8-0x1a2593 inclusive
// range: 0x1a2596-0x1a259b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a23d8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_2 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0xfffffffe;
  }
  iVar1 = FUN_000034d0();
  iVar1 = iVar1 + 1;
  if (param_1[1] != 0) {
    iVar2 = FUN_000034d0();
    iVar1 = iVar2 + iVar1 + 10;
  }
  if (param_1[2] != 0) {
    iVar2 = FUN_000034d0();
    iVar1 = iVar2 + iVar1 + 8;
  }
  if (param_1[3] != 0) {
    iVar2 = FUN_000034d0();
    iVar1 = iVar2 + iVar1 + 8;
  }
  if (param_1[4] != 0) {
    iVar2 = FUN_000034d0();
    iVar1 = iVar2 + iVar1 + 6;
  }
  if (param_1[5] != 0) {
    iVar2 = FUN_000034d0();
    iVar1 = iVar2 + iVar1 + 0xb;
  }
  iVar1 = iVar1 + 2;
  if (param_1[6] != 0) {
    iVar2 = FUN_000034d0();
    iVar1 = iVar2 + iVar1 + 9;
  }
  if (param_1[7] != 0) {
    iVar2 = FUN_000034d0();
    iVar1 = iVar2 + iVar1 + 0xc;
  }
  if (param_1[8] != 0) {
    iVar2 = FUN_000034d0();
    iVar1 = iVar2 + iVar1 + 9;
  }
  if (param_1[9] != 0) {
    iVar2 = FUN_000034d0();
    iVar1 = iVar2 + iVar1 + 9;
  }
  if (param_1[0xb] != 0) {
    iVar2 = FUN_000034d0();
    iVar1 = iVar2 + iVar1 + 5;
  }
  if (param_1[10] != 0) {
    iVar2 = FUN_000034d0();
    iVar1 = iVar2 + iVar1 + 6;
  }
  if (*(code **)s_x2___username__001a259c._0_4_ == entry) {
    iVar1 = FUN_0019b388(iVar1);
  }
  else {
    iVar1 = (**(code **)s_x2___username__001a259c._0_4_)(iVar1);
  }
  if (iVar1 != 0) {
    *param_2 = iVar1;
    uVar3 = FUN_001a6eec(iVar1,*param_1);
    if (param_1[1] != 0) {
      uVar3 = FUN_001a7010(uVar3,s_x2___username__001a259c + 4,10);
      uVar3 = FUN_001a6eec(uVar3,param_1[1]);
    }
    if (param_1[2] != 0) {
      uVar3 = FUN_001a7010(uVar3,s___realm__001a25ac,8);
      uVar3 = FUN_001a6eec(uVar3,param_1[2]);
    }
    if (param_1[3] != 0) {
      uVar3 = FUN_001a7010(uVar3,s___nonce__001a25b8,8);
      uVar3 = FUN_001a6eec(uVar3,param_1[3]);
    }
    if (param_1[4] != 0) {
      uVar3 = FUN_001a7010(uVar3,s___uri__001a25c4,6);
      uVar3 = FUN_001a6eec(uVar3,param_1[4]);
    }
    if (param_1[5] != 0) {
      uVar3 = FUN_001a7010(uVar3,s___response__001a25cc,0xb);
      uVar3 = FUN_001a6eec(uVar3,param_1[5]);
    }
    if (param_1[6] != 0) {
      uVar3 = FUN_001a7010(uVar3,s___digest__001a25d8,9);
      uVar3 = FUN_001a6eec(uVar3,param_1[6]);
    }
    if (param_1[7] != 0) {
      uVar3 = FUN_001a7010(uVar3,s___algorithm__001a25e4,0xc);
      uVar3 = FUN_001a6eec(uVar3,param_1[7]);
    }
    if (param_1[8] != 0) {
      uVar3 = FUN_001a7010(uVar3,s___cnonce__001a25f4,9);
      uVar3 = FUN_001a6eec(uVar3,param_1[8]);
    }
    if (param_1[9] != 0) {
      uVar3 = FUN_001a7010(uVar3,s___opaque__001a2600,9);
      uVar3 = FUN_001a6eec(uVar3,param_1[9]);
    }
    if (param_1[10] != 0) {
      uVar3 = FUN_001a7010(uVar3,s___qop__001a260c,6);
      uVar3 = FUN_001a6eec(uVar3,param_1[10]);
    }
    if (param_1[0xb] != 0) {
      uVar3 = FUN_001a7010(uVar3,s___nc__001a2614,5);
      FUN_001a6eec(uVar3,param_1[0xb]);
    }
    return 0;
  }
  return 0xfffffffc;
}

