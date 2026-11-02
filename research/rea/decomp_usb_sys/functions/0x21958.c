// rea decompile_all
// name: FUN_00021958
// address: 0x21958
// body: available
// range: 0x21958-0x21b76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_00021958(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar1 = (longlong *)(param_2 + 0x30);
  if ((longlong *)*plVar1 != plVar1) {
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    register0x00000020 = (BADSPACEBASE *)FUN_000264d0((ulonglong *)(param_2 + 0xa8),0,0x88);
    iVar2 = *(int *)(param_2 + 0x18);
    if (0 < iVar2) {
      if ((iVar2 < 4) || (iVar2 == 0x65)) {
        pcVar4 = FUN_00021d7c;
      }
      else {
        if ((iVar2 != 200) || (8 < *(uint *)(param_2 + 0x48))) goto LAB_00021aa8;
        pcVar4 = FUN_00021f84;
      }
      lVar5 = 0;
      *(code **)(param_2 + 0xa0) = pcVar4;
      plVar7 = (longlong *)(param_2 + 0xa8);
      lVar6 = 0;
      do {
        if (lVar5 != 0) {
          pcVar4 = (code *)(*(longlong *)(param_2 + 0x40) + lVar5);
          if (*(longlong **)pcVar4 != plVar1) {
            lVar5 = (longlong)*(longlong **)pcVar4 - *(longlong *)(param_2 + 0x40);
            goto LAB_00021a34;
          }
LAB_00021ac5:
          *(longlong *)(param_2 + 0x98) = param_2;
          lVar5 = 0;
          plVar1 = (longlong *)(param_1 + 0x88);
          goto LAB_00021ad6;
        }
        if ((longlong *)*plVar1 == plVar1) goto LAB_00021ac5;
        lVar5 = *plVar1 - *(longlong *)(param_2 + 0x40);
LAB_00021a34:
        if (lVar5 == 0) goto LAB_00021ac5;
        if ((*(uint *)(param_1 + 0x80) <= *(uint *)(lVar5 + 0x30)) || (0xf < lVar6))
        goto LAB_00021a7f;
        *plVar7 = lVar5;
        lVar6 = lVar6 + 1;
        plVar7 = plVar7 + 1;
        pcVar4 = (code *)0x0;
        *(undefined8 *)(lVar5 + 0xa0) = 0;
        *(undefined8 *)(lVar5 + 0xa8) = 0;
        *(undefined8 *)(lVar5 + 0xb0) = 0;
        *(undefined4 *)(lVar5 + 0xb8) = 0;
        *(undefined8 *)(lVar5 + 0xbc) = 0;
      } while( true );
    }
  }
  goto LAB_00021aa8;
  while( true ) {
    if (lVar5 == 0) goto LAB_00021b1e;
    uVar3 = *(uint *)(*(longlong *)(lVar5 + 0x28) + 0x30);
    pcVar4 = (code *)(ulonglong)uVar3;
    if (*(uint *)(*(longlong *)(param_2 + 0xa8) + 0x30) < uVar3) break;
LAB_00021ad6:
    if (lVar5 == 0) {
      if ((longlong *)*plVar1 == plVar1) {
LAB_00021b16:
        lVar5 = 0;
        break;
      }
      lVar5 = *plVar1 - *(longlong *)(param_1 + 0x98);
    }
    else {
      pcVar4 = (code *)(*(longlong *)(param_1 + 0x98) + lVar5);
      if (*(longlong **)pcVar4 == plVar1) goto LAB_00021b16;
      lVar5 = (longlong)*(longlong **)pcVar4 - *(longlong *)(param_1 + 0x98);
    }
  }
  if (lVar5 == 0) {
LAB_00021b1e:
    plVar7 = *(longlong **)(param_1 + 0x90);
    plVar1 = (longlong *)(param_2 + 0x80 + *(longlong *)(param_1 + 0x98));
    *plVar1 = *plVar7;
    plVar1[1] = (longlong)plVar7;
    pcVar4 = (code *)*plVar7;
    *(longlong **)(pcVar4 + 8) = plVar1;
    *plVar7 = (longlong)plVar1;
  }
  else {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 8 + lVar5);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x98) + 0x80 + param_2);
    lVar5 = *plVar7;
    plVar1[1] = (longlong)plVar7;
    *plVar1 = lVar5;
    *(longlong **)(*plVar7 + 8) = plVar1;
    *plVar7 = (longlong)plVar1;
  }
  *(longlong *)(param_2 + 0x90) = param_1;
  return CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
LAB_00021a7f:
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  register0x00000020 = (BADSPACEBASE *)FUN_000264d0((ulonglong *)(param_2 + 0xa8),0,0x88);
LAB_00021aa8:
  return (ulonglong)register0x00000020 & 0xffffffffffffff00;
}

