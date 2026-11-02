// rea decompile_all
// name: FUN_0008af00
// address: 0x8af00
// body: available
// range: 0x8af00-0x8b1d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0008af00(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  undefined1 auStack_1c [4];
  
  uVar2 = FUN_001b4f14(param_1);
  uVar3 = FUN_001b4ef0(param_1);
  if (*(char *)(param_1 + 0x82) == '\0') {
    uVar4 = 0x4e;
  }
  else {
    uVar4 = 0x59;
  }
  FUN_00002898(DAT_0008b1d8,*(undefined1 *)(param_1 + 0x1d),*(undefined1 *)(param_1 + 0x1c),uVar3,
               uVar2,uVar4);
  if (*(char *)(param_1 + 0x82) == '\0') {
    return 0xffffffff;
  }
  uVar2 = 0;
  FUN_00172844(auStack_1c,*(undefined4 *)(param_1 + 0x6c));
  switch(*(undefined1 *)(param_1 + 0x1d)) {
  case 0:
    cVar1 = *(char *)(param_1 + 0x1c);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        FUN_00090938(param_1);
      }
      else if (cVar1 == '\x02') {
        FUN_001726d4(auStack_34,param_1 + 0x5c);
        local_30 = FUN_001b9eb8(param_1 + 0x20);
        piVar7 = (int *)((int)*(int **)(param_1 + 0x68) +
                        *(int *)(**(int **)(param_1 + 0x68) + -0x1ec));
        local_3c = FUN_001beccc(DAT_0008b1dc);
        local_38 = DAT_0008b1e0;
        local_40 = 0;
        iVar6 = (**(code **)(*piVar7 + 0x1a4))(piVar7,auStack_34,DAT_0008b1e8,DAT_0008b1e4,4,0);
        if (iVar6 == 0) {
          *(undefined1 *)(param_1 + 0x1c) = 0;
          FUN_00111390(param_1 + 0x20);
          *(undefined1 *)(param_1 + 0x74) = 0;
          local_40 = FUN_002341f4(param_1 + 0x84);
          while( true ) {
            local_3c = FUN_002341cc(param_1 + 0x84);
            local_38 = local_3c;
            iVar6 = FUN_0022484c(&local_40,&local_38);
            if (iVar6 == 0) break;
            puVar5 = (undefined4 *)FUN_0022c26c(&local_40);
            (**(code **)(*(int *)*puVar5 + 0x20))((int *)*puVar5);
            FUN_0020930c(&local_40);
          }
          FUN_0008c3ac(param_1);
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
    }
    break;
  case 1:
    goto LAB_0008b124;
  case 2:
    uVar2 = FUN_0008c100(param_1);
    break;
  case 3:
    FUN_001726d4(auStack_28,param_1 + 0x5c);
    local_24 = FUN_001b9eb8(param_1 + 0x20);
    piVar7 = (int *)((int)*(int **)(param_1 + 0x68) + *(int *)(**(int **)(param_1 + 0x68) + -0x1ec))
    ;
    local_3c = FUN_001beccc(DAT_0008b1dc);
    local_38 = DAT_0008b1e0;
    local_40 = 0;
    iVar6 = (**(code **)(*piVar7 + 0x1a4))(piVar7,auStack_28,DAT_0008b1e8,DAT_0008b1e4,4,0);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    else {
      uVar2 = 0xffffffff;
    }
    break;
  case 4:
    *(undefined1 *)(param_1 + 0x1d) = 0;
    FUN_00090938(param_1);
    break;
  case 5:
LAB_0008b124:
    uVar2 = 0xfffffffb;
  }
  FUN_0017286c(auStack_1c);
  return uVar2;
}

