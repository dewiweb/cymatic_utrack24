// rea decompile_all
// name: FUN_0005fc18
// address: 0x5fc18
// body: available
// range: 0x5fc18-0x5fe07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0005fc18(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_48;
  int *local_44 [2];
  ushort local_3c [2];
  int *local_38;
  int *local_34;
  undefined4 local_30 [5];
  
  if (6 < param_4) {
    local_3c[0] = 0;
    FUN_00077824(local_30,param_3,local_3c);
    piVar1 = DAT_0005fe08;
    local_48 = DAT_0005fe08;
    FUN_00077c0c(&local_48,param_3,local_3c,param_4 - local_3c[0] & 0xffff);
    if (local_3c[0] < param_4) {
      local_38 = piVar1;
      FUN_00077c0c(&local_38,param_3,local_3c,param_4 - local_3c[0] & 0xffff);
      if (local_3c[0] < param_4) {
        local_34 = piVar1;
        FUN_00077c0c(&local_34,param_3,local_3c,param_4 - local_3c[0] & 0xffff);
        local_44[0] = DAT_0005fe0c;
        piVar4 = (int *)param_1[1];
        piVar1 = local_34 + -3;
        if (*piVar1 + 1 == 0) {
          uVar3 = local_34[-1];
          if (0xfffffff1 < uVar3) {
            FUN_0010f7cc(8,DAT_0005fe10,DAT_0005fe10,uVar3,0xfffffff1);
          }
          if (uVar3 != 0) {
            local_44[0] = (int *)FUN_0010f82c(uVar3 + 0xe,0);
            if (local_44[0] != (int *)0x0) {
              *local_44[0] = 0;
              local_44[0][1] = 0;
              local_44[0][2] = 0;
            }
            local_44[0][1] = uVar3;
            local_44[0][2] = uVar3;
            puVar2 = (undefined1 *)((int)local_44[0] + uVar3 + 0xc);
            *local_44[0] = 0;
            if (puVar2 != (undefined1 *)0x0) {
              *puVar2 = 0;
            }
          }
          local_44[0] = local_44[0] + 3;
          FUN_00003628(local_44[0],local_34,uVar3);
        }
        else {
          local_44[0] = local_34;
          if (piVar1 != DAT_0005fe0c) {
            *piVar1 = *piVar1 + 1;
          }
        }
        (**(code **)(*piVar4 + 0x16c))(piVar4,param_2,local_30[0],&local_48,&local_38,local_44);
        FUN_001da44c(local_44);
        FUN_001da44c(&local_34);
        FUN_001da44c(&local_38);
        FUN_001da44c(&local_48);
        return;
      }
      FUN_001da44c(&local_38);
      FUN_001da44c(&local_48);
    }
    else {
      FUN_001da44c(&local_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0005fce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,param_2,6);
  return;
}

