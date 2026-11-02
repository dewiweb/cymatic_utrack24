// rea decompile_all
// name: FUN_00233d2c
// address: 0x233d2c
// body: available
// range: 0x233d2c-0x233f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x233e54 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_00233d2c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint *puVar5;
  char *pcVar6;
  bool bVar7;
  undefined1 auStack_a8 [48];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined1 local_4c;
  char *local_44 [3];
  char *local_38;
  undefined1 local_34;
  
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 1;
  local_54 = (undefined4 *)FUN_001f01c4(0x1c,1);
  if (local_54 != (undefined4 *)0x0) {
    *local_54 = 0;
    FUN_001ce8fc(local_54,s_SyncDomainRunning_00233f2c,0,0);
    thunk_EXT_FUN_00400100(local_54);
  }
  local_50 = (undefined4 *)0x0;
  if (local_54 != (undefined4 *)0x0) {
    uVar1 = FUN_001eed14();
    local_50 = (undefined4 *)FUN_001f01c4(4,uVar1);
    if (local_50 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    *local_50 = 1;
  }
  local_4c = 0xfe;
  iVar2 = FUN_000c9e88(auStack_a8,&local_78);
  puVar5 = (uint *)(iVar2 + -4);
  pcVar3 = *(char **)(param_1 + 0x10);
  bVar7 = true;
  pcVar4 = pcVar3;
  if (*(char **)(pcVar3 + 4) != (char *)0x0) {
    pcVar6 = *(char **)(pcVar3 + 4);
    do {
      pcVar4 = pcVar6;
      bVar7 = *puVar5 < *(uint *)(pcVar4 + 0x10);
      if (bVar7) {
        pcVar6 = *(char **)(pcVar4 + 8);
      }
      else {
        pcVar6 = *(char **)(pcVar4 + 0xc);
      }
    } while (pcVar6 != (char *)0x0);
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_38 = pcVar4;
    if (bVar7) {
      if (pcVar4 == *(char **)(pcVar3 + 8)) goto LAB_00233ef0;
      if ((*pcVar4 == '\0') && (*(char **)(*(int *)(pcVar4 + 4) + 4) == pcVar4)) {
        local_38 = *(char **)(pcVar4 + 0xc);
      }
      else {
        pcVar3 = *(char **)(pcVar4 + 8);
        if (*(char **)(pcVar4 + 8) == (char *)0x0) {
          pcVar3 = pcVar4;
          for (local_38 = *(char **)(pcVar4 + 4); pcVar3 == *(char **)(local_38 + 8);
              local_38 = *(char **)(local_38 + 4)) {
            pcVar3 = local_38;
          }
        }
        else {
          do {
            local_38 = pcVar3;
            pcVar3 = *(char **)(local_38 + 0xc);
          } while (*(char **)(local_38 + 0xc) != (char *)0x0);
        }
      }
    }
    if (*puVar5 <= *(uint *)(local_38 + 0x10)) {
      local_34 = 0;
      goto LAB_00233f0c;
    }
  }
LAB_00233ef0:
  FUN_002220d8(local_44,param_1,0,pcVar4,puVar5);
  local_38 = local_44[0];
  local_34 = 1;
LAB_00233f0c:
  pcVar4 = local_38;
  FUN_000ca058(auStack_a8);
  FUN_000ca058(&local_78);
  return pcVar4 + 0x14;
}

