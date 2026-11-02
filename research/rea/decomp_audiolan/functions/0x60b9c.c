// rea decompile_all
// name: FUN_00060b9c
// address: 0x60b9c
// body: available
// range: 0x60b9c-0x60f03 inclusive
// range: 0x61020-0x61087 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00060b9c(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  code *pcVar10;
  
  iVar1 = FUN_00003960(*param_2,&DAT_00060f04,param_3,param_4,param_4);
  piVar4 = DAT_00060f0c;
  if (iVar1 == 0) {
    if (*DAT_00060f0c != 0) {
      FUN_000028a4(s_Installed_Interrupt_Counter___lu_00060f24,DAT_00060f0c[1]);
      uVar2 = 0;
      piVar4[1] = 0;
      do {
        uVar7 = uVar2 & 0xff;
        FUN_000028a4(s_eGpio__2lu__00060f48,uVar7);
        iVar1 = (**(code **)(*(int *)*piVar4 + 0x1c))((int *)*piVar4,uVar7);
        if (iVar1 == 1) {
          pcVar5 = s_inp__00060f58;
        }
        else {
          pcVar5 = s_out__00060f60;
        }
        FUN_000028a4(pcVar5);
        iVar1 = (**(code **)(*(int *)*piVar4 + 0x18))((int *)*piVar4,uVar7);
        if (iVar1 == 1) {
          puVar3 = &DAT_00060f68;
        }
        else {
          puVar3 = &DAT_00060f6c;
        }
        FUN_000028a4(puVar3);
        FUN_000028a4(s_Installed_Interrupt_Counter___lu_00060f24 + 0x20);
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x14);
      return 0;
    }
    FUN_000028a4(s_No_GPIO_module_available_00060f70);
    return 0;
  }
  iVar1 = FUN_00003960(*param_2,&DAT_00060f10);
  if (iVar1 == 0) {
    if (*piVar4 == 0) goto LAB_00060d50;
    if (param_3 - 1U < 2) {
      return 0;
    }
    uVar2 = FUN_0000317c(param_2[1]);
    if (uVar2 < 0x14) {
      iVar1 = FUN_0000317c(param_2[2]);
      FUN_000028a4(s_GPIO__lu_set_to_00060f8c,uVar2);
      piVar4 = (int *)*piVar4;
      if (iVar1 == 0) {
        (**(code **)(*piVar4 + 0x14))(piVar4,uVar2 & 0xff);
        pcVar5 = s_zero_00060fa8;
      }
      else {
        (**(code **)(*piVar4 + 0x10))(piVar4,uVar2 & 0xff);
        pcVar5 = &DAT_00060fa0;
      }
      goto LAB_00060d68;
    }
  }
  else {
    iVar1 = FUN_00003960(*param_2,&DAT_00060f14);
    if (iVar1 == 0) {
      if (*piVar4 == 0) goto LAB_00060d50;
      if (param_3 - 1U < 2) {
        return 0;
      }
      uVar2 = FUN_0000317c(param_2[1]);
      if (uVar2 < 0x14) {
        uVar2 = uVar2 & 0xff;
        FUN_000028a4(s_GPIO__lu_set_to_00060f8c);
        iVar1 = FUN_00003570(param_2[2],&DAT_00060fc8,3);
        piVar6 = (int *)*piVar4;
        if (iVar1 == 0) {
          (**(code **)(*piVar6 + 0xc))(piVar6,uVar2);
          pcVar5 = s_output_00060fd4;
        }
        else {
          (**(code **)(*piVar6 + 8))(piVar6,uVar2);
          pcVar5 = s_input_00060fcc;
        }
        FUN_000028a4(pcVar5);
        puVar9 = (undefined4 *)*piVar4;
        pcVar10 = *(code **)*puVar9;
LAB_00061050:
        (*pcVar10)(puVar9,uVar2);
        return 0;
      }
    }
    else {
      iVar1 = FUN_00003960(*param_2,&DAT_00060f18);
      if (iVar1 == 0) {
        if (*piVar4 == 0) goto LAB_00060d50;
        if (param_3 == 1) {
          return 0;
        }
        uVar7 = FUN_0000317c(param_2[1]);
        if (uVar7 < 0x14) {
          iVar1 = 2;
          uVar2 = uVar7 & 0xff;
          if (1 < param_3 - 1U) {
            iVar8 = FUN_00003570(param_2[2],&DAT_00060fdc,2);
            if (iVar8 == 0) {
              iVar1 = 1;
            }
            else {
              iVar8 = FUN_00003570(param_2[2],&DAT_00060fe0,2);
              if (iVar8 == 0) {
                iVar1 = 0;
              }
              else {
                iVar8 = FUN_00003570(param_2[2],&DAT_00060fe4,2);
                if ((iVar8 != 0) && (iVar8 = FUN_00003570(param_2[2],&DAT_00060fe8,2), iVar8 == 0))
                {
                  iVar1 = 3;
                }
              }
            }
          }
          iVar8 = (**(code **)(*(int *)*piVar4 + 0x20))((int *)*piVar4,uVar2,iVar1,DAT_00060fec,0);
          if (iVar8 == 0) {
            FUN_000028a4(s_Could_not_install_interrupt_hand_00061088,uVar7);
          }
          else {
            (**(code **)(*(int *)*piVar4 + 0x28))((int *)*piVar4,uVar2);
            FUN_000028a4(s_Y__Interrupt_handler__s_installe_00060ff1 + 3,
                         *(undefined4 *)(_DAT_00060ff0 + iVar1 * 4),uVar7);
          }
          (**(code **)(*(int *)*piVar4 + 8))((int *)*piVar4,uVar2);
          puVar9 = (undefined4 *)*piVar4;
          pcVar10 = *(code **)*puVar9;
          goto LAB_00061050;
        }
      }
      else {
        iVar1 = FUN_00003960(*param_2,&DAT_00060f20);
        if (iVar1 != 0) {
          return 6;
        }
        if (*piVar4 == 0) {
LAB_00060d50:
          pcVar5 = s_No_GPIO_module_available_00060f70;
          goto LAB_00060d68;
        }
        if (param_3 == 1) {
          return 0;
        }
        uVar2 = FUN_0000317c(param_2[1]);
        if (uVar2 < 0x14) {
          iVar1 = (**(code **)(*(int *)*piVar4 + 0x24))((int *)*piVar4,uVar2 & 0xff);
          if (iVar1 == 0) {
            pcVar5 = s_Could_not_remove_interrupt_handl_000610e8;
          }
          else {
            pcVar5 = s_Interrupt_handler_removed_from_G_000610bc;
          }
          FUN_000028a4(pcVar5,uVar2);
          return 0;
        }
      }
    }
  }
  pcVar5 = s_Invalid_GPIO_number_00060fb0;
LAB_00060d68:
  FUN_000028a4(pcVar5);
  return 0;
}

