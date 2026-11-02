// rea decompile_all
// name: FUN_00013238
// address: 0x13238
// body: available
// range: 0x13238-0x134c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00013238(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  undefined4 *puVar5;
  
  lVar3 = *(longlong *)(param_2 + 0xb8);
  KeWaitForSingleObject(DAT_00029268 + 0x18,0,0,0,0);
  bVar2 = *(byte *)(lVar3 + 1);
  if (bVar2 < 0xc) {
    if ((9 < bVar2) || (bVar2 < 2)) goto LAB_0001340d;
    if (bVar2 == 2) {
      if (*(char *)((longlong)param_1 + 0x29) != '\0') {
        if (param_1[6] != 0) {
          plVar1 = (longlong *)((longlong)param_1 + *(longlong *)(param_1[6] + 0xb0));
          *(longlong *)plVar1[1] = *plVar1;
          *(longlong *)(*plVar1 + 8) = plVar1[1];
          plVar1[1] = (longlong)plVar1;
          *plVar1 = (longlong)plVar1;
          *(int *)(param_1[6] + 0xb8) = *(int *)(param_1[6] + 0xb8) + -1;
          param_1[6] = 0;
        }
        FUN_00011d54((longlong)param_1);
        (**(code **)*param_1)(param_1,1);
      }
      goto LAB_0001340d;
    }
    if (bVar2 < 3) goto LAB_00013312;
    if (bVar2 < 7) goto LAB_0001340d;
    if (bVar2 == 7) {
      if (*(int *)(lVar3 + 8) != 4) goto LAB_00013312;
      puVar5 = (undefined4 *)ExAllocatePoolWithTag(1,0x10,0x6f645043);
      if (puVar5 == (undefined4 *)0x0) {
        iVar4 = -0x3fffff66;
      }
      else {
        ObfReferenceObject(param_1[2]);
        lVar3 = param_1[2];
        *puVar5 = 1;
        *(longlong *)(puVar5 + 2) = lVar3;
        if (*(longlong *)(param_2 + 0x38) != 0) {
          ExFreePoolWithTag(*(longlong *)(param_2 + 0x38),0);
        }
        *(undefined4 **)(param_2 + 0x38) = puVar5;
        iVar4 = 0;
      }
      *(int *)(param_2 + 0x30) = iVar4;
    }
    else if (bVar2 == 8) {
      lVar3 = *(longlong *)(param_2 + 0xb8);
      iVar4 = (**(code **)(*param_1 + 0x58))
                        (param_1,*(undefined8 *)(lVar3 + 8),*(undefined2 *)(lVar3 + 0x10),
                         *(undefined2 *)(lVar3 + 0x12),*(undefined8 *)(lVar3 + 0x18));
      if (iVar4 != 0) goto LAB_00013312;
      *(undefined4 *)(param_2 + 0x30) = 0;
      iVar4 = 0;
    }
    else if ((bVar2 == 9) && (param_1[6] != 0)) {
      iVar4 = FUN_000126a4(param_1[6],param_2);
      if ((-1 < iVar4) && (_Src = *(void **)(lVar3 + 8), _Src != (void *)0x0)) {
        *(undefined4 *)((longlong)_Src + 8) = 0xffffffff;
        *(undefined4 *)((longlong)_Src + 0xc) = 0xffffffff;
        *(uint *)((longlong)_Src + 4) = *(uint *)((longlong)_Src + 4) | 0x2c0;
        memcpy(param_1 + 10,_Src,0x40);
      }
    }
    else {
LAB_00013312:
      iVar4 = *(int *)(param_2 + 0x30);
    }
  }
  else {
    if (bVar2 == 0xc) {
      iVar4 = FUN_00013644((longlong)param_1,param_2);
      goto LAB_00013497;
    }
    if (bVar2 != 0xd) {
      if (0xe < bVar2) {
        if (bVar2 < 0x13) {
LAB_0001345d:
          lVar3 = param_1[6];
          if (lVar3 != 0) {
            *(longlong *)(param_2 + 0xb8) = *(longlong *)(param_2 + 0xb8) + 0x48;
            *(char *)(param_2 + 0x43) = *(char *)(param_2 + 0x43) + '\x01';
            iVar4 = IofCallDriver(*(undefined8 *)(lVar3 + 0x68),param_2);
            goto LAB_00013497;
          }
        }
        else {
          if (bVar2 == 0x13) {
            iVar4 = FUN_000134c8((longlong)param_1,param_2);
            goto LAB_00013497;
          }
          if (0x13 < bVar2) {
            if (bVar2 < 0x17) goto LAB_0001345d;
            if (bVar2 == 0x17) goto LAB_0001340d;
          }
        }
      }
      goto LAB_00013312;
    }
LAB_0001340d:
    iVar4 = 0;
    *(undefined4 *)(param_2 + 0x30) = 0;
  }
  IofCompleteRequest(param_2,0);
LAB_00013497:
  KeReleaseMutex(DAT_00029268 + 0x18,0);
  return iVar4;
}

