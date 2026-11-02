// rea decompile_all
// name: FUN_00012830
// address: 0x12830
// body: available
// range: 0x12830-0x12ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00012830(longlong *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_2 + 0xb8);
  KeWaitForSingleObject(DAT_00029268 + 0x18,0,0,0,0);
  bVar1 = *(byte *)(lVar3 + 1);
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      iVar4 = (**(code **)(*param_1 + 0x68))(param_1);
      if (-1 < iVar4) {
        *(undefined4 *)(param_1 + 3) = 1;
LAB_0001297e:
        *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
        goto LAB_000128ce;
      }
LAB_00012987:
      *(int *)(param_2 + 0x30) = iVar4;
    }
    else {
      if (bVar1 == 0) {
        lVar3 = param_1[3];
        uVar2 = *(undefined1 *)((longlong)param_1 + 0x1c);
        iVar4 = FUN_000126a4((longlong)param_1,param_2);
        if (-1 < iVar4) {
          *(undefined4 *)(param_1 + 3) = 0;
          *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
          iVar4 = (**(code **)(*param_1 + 0x60))(param_1);
          if (iVar4 < 0) {
            *(int *)(param_1 + 3) = (int)lVar3;
            *(undefined1 *)((longlong)param_1 + 0x1c) = uVar2;
          }
        }
        *(undefined4 *)(param_1 + 4) = 1;
      }
      else {
        if (bVar1 == 1) {
          iVar4 = (**(code **)(*param_1 + 0x80))(param_1);
          if (-1 < iVar4) {
            *(undefined4 *)(param_1 + 3) = 3;
            goto LAB_0001297e;
          }
          goto LAB_00012987;
        }
        if (bVar1 == 2) {
          FUN_00012400((longlong)param_1);
          (**(code **)(*param_1 + 0x90))(param_1);
          *(undefined4 *)(param_1 + 3) = 4;
          *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
          *(undefined4 *)(param_2 + 0x30) = 0;
          *(char *)(param_2 + 0x43) = *(char *)(param_2 + 0x43) + '\x01';
          *(longlong *)(param_2 + 0xb8) = *(longlong *)(param_2 + 0xb8) + 0x48;
          iVar4 = IofCallDriver(param_1[0xd],param_2);
          (**(code **)*param_1)(param_1,1);
          goto LAB_00012aa4;
        }
        if (bVar1 != 3) {
          if (bVar1 == 4) {
            FUN_00012400((longlong)param_1);
            (**(code **)(*param_1 + 0x78))(param_1);
            *(undefined4 *)(param_1 + 3) = 2;
            goto LAB_000128c7;
          }
          goto LAB_000128ce;
        }
        iVar4 = FUN_000126a4((longlong)param_1,param_2);
        if (-1 < iVar4) {
          (**(code **)(*param_1 + 0x88))(param_1);
          goto LAB_00012a8e;
        }
      }
LAB_00012a96:
      *(int *)(param_2 + 0x30) = iVar4;
    }
LAB_00012a99:
    IofCompleteRequest(param_2,0);
  }
  else {
    if (bVar1 == 6) {
      iVar4 = FUN_000126a4((longlong)param_1,param_2);
      if (-1 < iVar4) {
        (**(code **)(*param_1 + 0x70))(param_1);
LAB_00012a8e:
        *(undefined4 *)(param_1 + 3) = 0;
        *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
      }
      goto LAB_00012a96;
    }
    if (bVar1 == 7) {
      if (*(int *)(lVar3 + 8) == 0) {
        iVar4 = FUN_00012adc((longlong)param_1,param_2);
        goto LAB_00012aa4;
      }
    }
    else {
      if (bVar1 == 9) {
        iVar4 = FUN_000126a4((longlong)param_1,param_2);
        if ((-1 < iVar4) && (*(void **)(lVar3 + 8) != (void *)0x0)) {
          memcpy((void *)((longlong)param_1 + 0x24),*(void **)(lVar3 + 8),0x40);
        }
        goto LAB_00012a99;
      }
      if (bVar1 == 0x17) {
        FUN_00012400((longlong)param_1);
        (**(code **)(*param_1 + 0x98))(param_1);
        *(undefined4 *)(param_1 + 3) = 5;
LAB_000128c7:
        *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
      }
    }
LAB_000128ce:
    *(char *)(param_2 + 0x43) = *(char *)(param_2 + 0x43) + '\x01';
    *(longlong *)(param_2 + 0xb8) = *(longlong *)(param_2 + 0xb8) + 0x48;
    iVar4 = IofCallDriver(param_1[0xd],param_2);
  }
LAB_00012aa4:
  KeReleaseMutex(DAT_00029268 + 0x18,0);
  return iVar4;
}

