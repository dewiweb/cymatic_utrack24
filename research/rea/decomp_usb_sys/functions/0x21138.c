// rea decompile_all
// name: FUN_00021138
// address: 0x21138
// body: available
// range: 0x21138-0x2130d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00021138(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar4 = DAT_00029268;
  uVar2 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
  *(undefined1 *)(lVar4 + 0x58) = uVar2;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  KeCancelTimer(param_1 + 0x90);
  lVar7 = 0;
  do {
    if (lVar7 == 0) {
      if ((longlong *)*param_1 == param_1) break;
      lVar7 = *param_1 - param_1[2];
    }
    else {
      plVar6 = *(longlong **)(param_1[2] + lVar7);
      if (plVar6 == param_1) break;
      lVar7 = (longlong)plVar6 - param_1[2];
    }
    if (lVar7 == 0) break;
    *(undefined1 *)(lVar7 + 0xb4) = 0;
  } while( true );
  lVar7 = 0;
  plVar6 = param_1 + 3;
  do {
    if (lVar7 == 0) {
      if ((longlong *)*plVar6 == plVar6) break;
      lVar7 = *plVar6 - param_1[5];
    }
    else {
      plVar1 = *(longlong **)(lVar7 + param_1[5]);
      if (plVar1 == plVar6) break;
      lVar7 = (longlong)plVar1 - param_1[5];
    }
    if (lVar7 == 0) break;
    *(undefined1 *)(lVar7 + 0xb4) = 0;
  } while( true );
  *(undefined4 *)(param_1 + 0x8f) = 1;
  KeReleaseSpinLock(lVar4 + 0x50,*(undefined1 *)(lVar4 + 0x58));
  lVar4 = 0;
  iVar5 = 0;
LAB_00021201:
  if (lVar4 == 0) {
    if ((longlong *)*param_1 == param_1) goto LAB_00021240;
    lVar4 = *param_1 - param_1[2];
  }
  else {
    plVar1 = *(longlong **)(param_1[2] + lVar4);
    if (plVar1 == param_1) goto LAB_00021240;
    lVar4 = (longlong)plVar1 - param_1[2];
  }
  if (lVar4 == 0) goto LAB_00021240;
  iVar3 = FUN_0001fcdc(lVar4);
  if ((iVar3 < 0) && (-1 < iVar5)) {
    iVar5 = iVar3;
  }
  goto LAB_00021201;
LAB_00021240:
  lVar4 = 0;
LAB_00021242:
  if (lVar4 == 0) {
    if ((longlong *)*plVar6 == plVar6) goto LAB_00021281;
    lVar4 = *plVar6 - param_1[5];
  }
  else {
    plVar1 = *(longlong **)(param_1[5] + lVar4);
    if (plVar1 == plVar6) goto LAB_00021281;
    lVar4 = (longlong)plVar1 - param_1[5];
  }
  if (lVar4 == 0) goto LAB_00021281;
  iVar3 = FUN_00020460(lVar4);
  if ((iVar3 < 0) && (-1 < iVar5)) {
    iVar5 = iVar3;
  }
  goto LAB_00021242;
LAB_00021281:
  lVar4 = 0;
  plVar6 = param_1 + 6;
  do {
    if (lVar4 == 0) {
      if ((longlong *)*plVar6 == plVar6) goto LAB_000212bc;
      lVar4 = *plVar6 - param_1[8];
    }
    else {
      plVar1 = *(longlong **)(param_1[8] + lVar4);
      if (plVar1 == plVar6) {
LAB_000212bc:
        lVar4 = 0;
        plVar6 = param_1 + 9;
        while( true ) {
          if (lVar4 == 0) {
            if ((longlong *)*plVar6 == plVar6) {
              return iVar5;
            }
            lVar4 = *plVar6 - param_1[0xb];
          }
          else {
            plVar1 = *(longlong **)(param_1[0xb] + lVar4);
            if (plVar1 == plVar6) {
              return iVar5;
            }
            lVar4 = (longlong)plVar1 - param_1[0xb];
          }
          if (lVar4 == 0) break;
          FUN_00024cac(lVar4);
        }
        return iVar5;
      }
      lVar4 = (longlong)plVar1 - param_1[8];
    }
    if (lVar4 == 0) goto LAB_000212bc;
    FUN_00024cac(lVar4);
  } while( true );
}

