// rea decompile_all
// name: FUN_000509a8
// address: 0x509a8
// body: available
// range: 0x509a8-0x50b99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_000509a8(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            int param_7,int *param_8,char *param_9,int *param_10)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_40;
  char local_3c [4];
  int *local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  int iStack_1c;
  undefined4 local_18;
  
  uVar7 = 0;
  local_24 = param_1;
  local_20 = param_2;
  iStack_1c = param_3;
  local_18 = param_4;
  uVar2 = FUN_001c6bc2(param_3);
  iVar3 = FUN_001c103c(uVar2,DAT_00050b9c);
  if (iVar3 == 0) {
    uVar2 = FUN_001c6bc2(param_3);
    iVar3 = FUN_001c103c(uVar2,DAT_00050ba0);
    if (iVar3 == 0) {
LAB_00050b28:
      uVar7 = 0;
    }
    else {
      local_2c = (param_5 << 0x1e) >> 0x1f;
      local_28 = (param_5 << 0x1f) >> 0x1f;
      local_34 = param_3;
      for (piVar6 = (int *)(param_3 + 0x10);
          piVar6 < (int *)(*(int *)(local_34 + 0xc) * 8 + local_34 + 0x10); piVar6 = piVar6 + 2) {
        uVar4 = piVar6[1];
        local_30 = uVar4 & 1;
        local_38 = local_24;
        if (local_24 != (int *)0x0) {
          iVar3 = (int)uVar4 >> 8;
          if (local_30 != 0) {
            iVar3 = *(int *)(iVar3 + *local_24);
          }
          local_38 = (int *)(iVar3 + (int)local_24);
        }
        if ((param_7 == 0) || (-1 < (int)(uVar4 << 0x1e))) {
          iVar3 = 0;
        }
        else {
          iVar3 = 1;
        }
        iVar5 = FUN_001c103c(*piVar6,local_18);
        if (iVar5 == 0) {
          local_40 = 0;
          local_3c[0] = '\0';
          iVar3 = FUN_000509a8(local_38,local_20,*piVar6,local_18,param_5,param_6,iVar3,&local_40,
                               local_3c,param_10);
          if (iVar3 != 0) {
            if (*param_6 == 0) {
              if ((local_40 == 0) && ((piVar6[1] & 1U) != 0)) {
                local_40 = *piVar6;
              }
              if (((*param_9 == '\0') || ((local_3c[0] == '\x02' && (*param_9 == '\x02')))) ||
                 ((*param_8 != 0 && (*param_8 == local_40)))) {
                *param_9 = local_3c[0];
                *param_8 = local_40;
                goto LAB_00050b6c;
              }
              *param_6 = 1;
            }
            goto LAB_00050b28;
          }
          if (*param_6 != 0) goto LAB_00050b28;
        }
        else {
          if (((((int *)*local_20 != (int *)0x0) && ((int *)*local_20 != local_38)) ||
              (((piVar6[1] & 1U) != 0 && (*param_9 == '\x01')))) || (*param_6 != 0)) {
            *param_6 = 1;
            *local_20 = 0;
            goto LAB_00050b28;
          }
          if ((piVar6[1] & 1U) == 0) {
            cVar1 = '\x01';
          }
          else {
            cVar1 = '\x02';
          }
          *param_9 = cVar1;
          *param_10 = iVar3;
          *local_20 = (int)local_38;
LAB_00050b6c:
          uVar7 = 1;
          if (*param_10 != 0) {
            iVar3 = local_28;
            if (local_30 != 0) {
              iVar3 = local_2c;
            }
            if (iVar3 != -1) {
              return 1;
            }
          }
        }
      }
    }
  }
  else {
    iVar3 = FUN_001c103c(*(undefined4 *)(param_3 + 8),local_18);
    if (iVar3 == 0) {
      iVar3 = FUN_000509a8(local_24,local_20,*(undefined4 *)(param_3 + 8),local_18,param_5,param_6,
                           param_7,param_8,param_9,param_10);
      if (iVar3 == 0) {
        return 0;
      }
      if (*param_6 != 0) {
        return 0;
      }
    }
    else {
      if (((((int *)*local_20 != (int *)0x0) && ((int *)*local_20 != local_24)) ||
          (*param_9 == '\x02')) || (*param_6 != 0)) {
        *param_6 = 1;
        *local_20 = 0;
        return 0;
      }
      *param_9 = '\x01';
      *param_10 = param_7;
      *local_20 = (int)local_24;
    }
    uVar7 = 1;
  }
  return uVar7;
}

