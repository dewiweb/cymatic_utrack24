// rea decompile_all
// name: FUN_001727d0
// address: 0x1727d0
// body: available
// range: 0x1727d0-0x172999 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001727d0(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *local_4cc;
  char local_4c8 [68];
  undefined1 local_484 [12];
  int local_478;
  undefined1 auStack_469 [1025];
  undefined1 auStack_68 [72];
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  local_478 = param_3 + 0x9c;
  iVar5 = 0;
  local_20 = param_1;
  iStack_1c = param_2;
  iStack_18 = param_3;
  while (iVar2 = FUN_001a4bc4(local_478,iVar5), iVar2 == 0) {
    uVar3 = FUN_001a4bdc(local_478,iVar5);
    iVar2 = FUN_001a3ee4(uVar3,&local_4cc);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_001a4a80(param_2 + 0x9c,local_4cc,0xffffffff);
    iVar5 = iVar5 + 1;
  }
  if ((*(int *)(param_3 + 0xc) == 0) &&
     (iVar5 = FUN_00003960(*(undefined4 *)(param_3 + 8),&DAT_0017299c), iVar5 == 0)) {
    return 0;
  }
  local_4c8[0] = '\0';
  local_484[0] = 0;
  if (*(code **)(local_20 + 0x5c) != entry) {
    (**(code **)(local_20 + 0x5c))(local_20,local_4c8,0x41,local_484,10);
  }
  FUN_000038a0(auStack_68,0x44);
  FUN_00175564(local_20,*(undefined4 *)(local_20 + 0x2c),auStack_68,0x31);
  if (*(int *)(*(int *)(*(int *)(param_3 + 0xac) + 4) + 4) == 0) {
    FUN_000027f4(auStack_469 + 1,1000,s_<sip:_s:_s>_001729b4,auStack_68,local_484);
  }
  else {
    local_478 = FUN_0016f8cc();
    local_4cc = local_484;
    FUN_000027f4(auStack_469 + 1,1000,s_<sip:_s__s:_s>_001729a0,local_478,auStack_68);
    if (local_478 != 0) {
      if ((code *)*DAT_001729b0 == entry) {
        FUN_0018a280(local_478);
      }
      else {
        (*(code *)*DAT_001729b0)();
      }
    }
  }
  if (local_4c8[0] != '\0') {
    if (*(int *)(*(int *)(*(int *)(param_3 + 0xac) + 4) + 4) == 0) {
      FUN_000027f4(auStack_469 + 1,1000,s_<sip:_s:_s>_001729b4,local_4c8,local_484);
    }
    else {
      iVar5 = FUN_0016f8cc();
      local_4cc = local_484;
      FUN_000027f4(auStack_469 + 1,1000,s_<sip:_s__s:_s>_001729a0,iVar5,local_4c8);
      if (iVar5 != 0) {
        if ((code *)*DAT_001729b0 == entry) {
          FUN_0018a280(iVar5);
        }
        else {
          (*(code *)*DAT_001729b0)(iVar5);
        }
      }
    }
  }
  iVar5 = FUN_001a4bdc(param_2 + 0xb0,0);
  if ((iVar5 != 0) && (*(int *)(iVar5 + 4) != 0)) {
    puVar1 = auStack_469 + 1;
    iVar2 = FUN_000034d0(puVar1);
    iVar4 = FUN_000034d0(*(undefined4 *)(iVar5 + 4));
    if ((iVar2 + iVar4 + 0xcU < 0x400) &&
       (iVar2 = FUN_001a6f04(*(undefined4 *)(iVar5 + 4),&DAT_001729c0), iVar2 != 0)) {
      iVar2 = FUN_000034d0(puVar1);
      auStack_469[iVar2] = 0;
      FUN_00003604(puVar1,s__transport__001729c4);
      FUN_00003604(puVar1,*(undefined4 *)(iVar5 + 4));
      FUN_00003604(puVar1,&DAT_001729d0);
    }
    FUN_001a5d38(param_2,puVar1);
    return 0;
  }
  return -5;
}

