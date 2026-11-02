// rea decompile_all
// name: FUN_00077e14
// address: 0x77e14
// body: available
// range: 0x77e14-0x77fe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00077e14(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  int iStack_18;
  
  if (*(char *)((int)param_1 + 0xcf) != '\0') {
    return;
  }
  do {
    while( true ) {
      uVar2 = (uint)*(byte *)((int)param_1 + 0xd1);
      bVar4 = uVar2 == 0;
      bVar5 = param_1 == (int *)0xffffff2c;
      if (!bVar4 && !bVar5) {
        uVar2 = param_1[0x35];
      }
      bVar6 = (bVar4 || bVar5) || uVar2 == 0;
      if ((bVar4 || bVar5) || uVar2 == 0) {
        bVar6 = *(char *)((int)param_1 + 0xcf) == '\0';
      }
      if (!bVar6) break;
      (**(code **)(*param_1 + 0x1c))(param_1,500);
    }
    *(undefined1 *)(param_1 + 0x34) = 0;
    iVar3 = FUN_0019dc00(0x20,0x11,0);
    param_1[0x31] = iVar3;
    if (iVar3 == 0) {
      FUN_000028a4(DAT_00077fec,*(undefined1 *)((int)param_1 + 0xce));
LAB_00077ed4:
      *(undefined1 *)(param_1 + 0x34) = 1;
    }
    else {
      *(undefined4 *)(iVar3 + 0xb0) = 500;
      iVar3 = FUN_0019d4b4(param_1[0x31],param_1 + 0x32,(short)param_1[0x33]);
      if (iVar3 != 0) {
        FUN_000028a4(DAT_00077fe8,*(undefined1 *)((int)param_1 + 0xce),param_1 + 0x36,
                     (short)param_1[0x33]);
        goto LAB_00077ed4;
      }
      if (((param_1[0x32] & 0xf0U) == 0xe0) &&
         (iVar3 = FUN_0019daa8(param_1[0x31],param_1 + 0x32,0), iVar3 != 0)) {
        FUN_000028a4(DAT_00077ff0,*(undefined1 *)((int)param_1 + 0xce));
      }
    }
    while( true ) {
      cVar1 = *(char *)((int)param_1 + 0xcf);
      bVar4 = cVar1 == '\0';
      if (bVar4) {
        cVar1 = (char)param_1[0x34];
      }
      iVar3 = param_1[0x31];
      if (!bVar4 || cVar1 != '\0') break;
      iVar3 = FUN_0019dd64(iVar3,&iStack_18);
      if (iVar3 == 0) {
        iVar3 = FUN_0019d0c8(iStack_18,auStack_20,auStack_1c);
        if (iVar3 == 0) {
          (**(code **)(*(int *)param_1[0x30] + 0x10c))
                    ((int *)param_1[0x30],*(undefined1 *)((int)param_1 + 0xce),iStack_18 + 8,
                     *(undefined2 *)(iStack_18 + 0xc));
        }
        FUN_0019d1bc(iStack_18);
      }
    }
    if (iVar3 != 0) {
      if (((param_1[0x32] & 0xf0U) == 0xe0) &&
         (iVar3 = FUN_0019daa8(iVar3,param_1 + 0x32,0,1), iVar3 != 0)) {
        FUN_000028a4(DAT_00077ff4,*(undefined1 *)((int)param_1 + 0xce));
      }
      FUN_0019d660(param_1[0x31]);
      param_1[0x31] = 0;
    }
    if (*(char *)((int)param_1 + 0xcf) != '\0') {
      return;
    }
  } while( true );
}

