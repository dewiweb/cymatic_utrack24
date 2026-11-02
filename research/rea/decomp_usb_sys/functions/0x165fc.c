// rea decompile_all
// name: FUN_000165fc
// address: 0x165fc
// body: available
// range: 0x165fc-0x16789 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_000165fc(longlong param_1,int *param_2)

{
  longlong *plVar1;
  char *pcVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int extraout_EAX;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong local_res8 [2];
  
  lVar5 = DAT_00029268;
  plVar1 = (longlong *)(DAT_00029268 + 0xd0);
  lVar11 = 0;
  local_res8[0] = param_1;
  lVar9 = FUN_00016b88(plVar1,*param_2);
  if (lVar9 == 0) {
    lVar9 = 0xe0000040;
  }
  else {
    iVar8 = param_2[1];
    pcVar2 = (char *)(lVar9 + 0x1a14);
    iVar3 = *(int *)(lVar9 + 0xe4);
    *(int *)(lVar9 + 0xe4) = iVar8;
    FUN_000117c0(pcVar2,(char *)(param_2 + 0x18),0x28);
    local_res8[1] = 0;
    local_res8[0] = 0;
    FUN_00016e98(local_res8 + 1,local_res8,lVar9);
    iVar10 = extraout_EAX;
    if ((-1 < extraout_EAX) &&
       (iVar7 = FUN_0001134c(local_res8[0],L"Nickname",1,pcVar2), iVar10 = 0, iVar7 < 0)) {
      iVar10 = iVar7;
    }
    if (local_res8[0] != 0) {
      ZwClose();
    }
    FUN_00016db0(local_res8 + 1);
    lVar6 = DAT_00029268;
    lVar9 = lVar11;
    if (iVar10 < 0) {
      lVar9 = 0xe0000060;
    }
    if (iVar3 != iVar8) {
      *(int *)(lVar5 + 0x718) = *(int *)(lVar5 + 0x718) + 1;
      *(undefined4 *)(lVar6 + 0x71c) = 0;
      do {
        if (lVar11 == 0) {
          if ((longlong *)*plVar1 == plVar1) goto LAB_00016764;
          lVar11 = *plVar1 - *(longlong *)(lVar5 + 0xe0);
        }
        else {
          plVar4 = *(longlong **)(*(longlong *)(lVar5 + 0xe0) + lVar11);
          if (plVar4 == plVar1) {
LAB_00016764:
            iVar8 = FUN_000146f4(lVar5);
            if (-1 < iVar8) {
              return lVar9;
            }
            return 0xe0000060;
          }
          lVar11 = (longlong)plVar4 - *(longlong *)(lVar5 + 0xe0);
        }
        if (lVar11 == 0) goto LAB_00016764;
        iVar8 = FUN_0001a7c8(lVar11);
        if (iVar8 < 0) {
          lVar9 = 0xe0000060;
        }
        if (*(uint *)(DAT_00029268 + 0x71c) <= *(uint *)(lVar11 + 0xe4)) {
          *(uint *)(DAT_00029268 + 0x71c) = *(uint *)(lVar11 + 0xe4) + 1;
        }
      } while( true );
    }
  }
  return lVar9;
}

