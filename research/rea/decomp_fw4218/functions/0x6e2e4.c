// rea decompile_all
// name: FUN_0006e2e4
// address: 0x6e2e4
// body: available
// range: 0x6e2e4-0x6e533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0006e2e4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar4 = *(char *)((int)param_1 + 6);
  uStack_20 = param_3;
  uStack_1c = param_4;
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1);
  if (iVar2 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar1 = *(char *)((int)param_1 + 6);
    if (cVar1 == '\0') {
      cVar4 = '\x01';
      param_1[2] = 0;
    }
    else if (cVar1 == '\x01') {
      param_1[2] = param_1[2] + 1;
      if (param_1[2] == param_1[3]) {
        cVar4 = '\x02';
        param_1[2] = 0;
      }
    }
    else if (cVar1 == '\x02') {
      param_1[2] = param_1[2] + 1;
    }
  }
  if (*(char *)((int)param_1 + 6) == cVar4) {
    if (((iVar2 != 0) && (*(char *)((int)param_1 + 6) == '\x02')) && (param_1[2] == param_1[4])) {
      FUN_00236674(&uStack_20,param_1 + 5);
      while( true ) {
        FUN_00236654(&uStack_1c,param_1 + 5);
        iVar2 = FUN_0022d878(&uStack_20,&uStack_1c);
        if (iVar2 == 0) break;
        puVar3 = (undefined4 *)FUN_0022d844(&uStack_20);
        (**(code **)(*(int *)*puVar3 + 0x18))((int *)*puVar3,(short)param_1[1]);
        FUN_00232c10(&uStack_20);
      }
      param_1[2] = 0;
    }
  }
  else {
    FUN_00236674(&uStack_20,param_1 + 5);
    while( true ) {
      FUN_00236654(&uStack_1c,param_1 + 5);
      iVar2 = FUN_0022d878(&uStack_20,&uStack_1c);
      if (iVar2 == 0) break;
      if (cVar4 == '\0') {
        if (*(char *)((int)param_1 + 6) == '\x02') {
          puVar3 = (undefined4 *)FUN_0022d844(&uStack_20);
          (**(code **)(*(int *)*puVar3 + 0x14))((int *)*puVar3,(short)param_1[1]);
        }
        else {
          puVar3 = (undefined4 *)FUN_0022d844(&uStack_20);
          (**(code **)(*(int *)*puVar3 + 8))((int *)*puVar3,(short)param_1[1]);
        }
      }
      else if (cVar4 == '\x01') {
        puVar3 = (undefined4 *)FUN_0022d844(&uStack_20);
        (**(code **)(*(int *)*puVar3 + 0x10))((int *)*puVar3,(short)param_1[1]);
      }
      else if (cVar4 == '\x02') {
        puVar3 = (undefined4 *)FUN_0022d844(&uStack_20);
        (**(code **)(*(int *)*puVar3 + 0xc))((int *)*puVar3,(short)param_1[1]);
      }
      FUN_00232c10(&uStack_20);
    }
    *(char *)((int)param_1 + 6) = cVar4;
  }
  return;
}

