// rea decompile_all
// name: FUN_00022100
// address: 0x22100
// body: available
// range: 0x22100-0x22348 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_00022100(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar1 = (longlong *)(param_2 + 0x30);
  if ((longlong *)*plVar1 == plVar1) goto LAB_0002226f;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  register0x00000020 = (BADSPACEBASE *)FUN_000264d0((ulonglong *)(param_2 + 0xa8),0,0x88);
  iVar2 = *(int *)(param_2 + 0x18);
  if (iVar2 < 1) goto LAB_0002226f;
  if (3 < iVar2) {
    if (iVar2 == 100) {
      if (*(int *)(param_2 + 0x48) != 2) goto LAB_0002226f;
      pcVar4 = FUN_00022808;
      if (*(longlong **)(param_2 + 0x50) != (longlong *)(param_2 + 0x50)) {
        pcVar4 = FUN_00022a5c;
      }
      goto LAB_000221ba;
    }
    if (iVar2 != 0x65) {
      if (iVar2 == 200) goto LAB_00022187;
      goto LAB_0002226f;
    }
  }
  pcVar4 = FUN_00022808;
LAB_000221ba:
  *(code **)(param_2 + 0xa0) = pcVar4;
  lVar5 = 0;
  plVar7 = (longlong *)(param_2 + 0xa8);
  lVar6 = 0;
  do {
    if (lVar5 != 0) {
      plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x40) + lVar5);
      if (plVar3 != plVar1) {
        lVar5 = (longlong)plVar3 - *(longlong *)(param_2 + 0x40);
        goto LAB_000221fb;
      }
LAB_0002228c:
      *(undefined4 *)(param_2 + 0x130) = 0;
      plVar1 = (longlong *)(param_1 + 0xf8);
      *(longlong *)(param_2 + 0x98) = param_2;
      lVar5 = 0;
      break;
    }
    if ((longlong *)*plVar1 == plVar1) goto LAB_0002228c;
    lVar5 = *plVar1 - *(longlong *)(param_2 + 0x40);
LAB_000221fb:
    if (lVar5 == 0) goto LAB_0002228c;
    if ((*(uint *)(param_1 + 200) <= *(uint *)(lVar5 + 0x30)) || (0xf < lVar6)) goto LAB_00022246;
    *plVar7 = lVar5;
    lVar6 = lVar6 + 1;
    plVar7 = plVar7 + 1;
    *(undefined8 *)(lVar5 + 0xa0) = 0;
    *(undefined8 *)(lVar5 + 0xa8) = 0;
    *(undefined8 *)(lVar5 + 0xb0) = 0;
    *(undefined4 *)(lVar5 + 0xb8) = 0;
    *(undefined8 *)(lVar5 + 0xbc) = 0;
  } while( true );
  while( true ) {
    if (lVar5 == 0) goto LAB_000222ea;
    if (*(uint *)(*(longlong *)(param_2 + 0xa8) + 0x30) <
        *(uint *)(*(longlong *)(lVar5 + 0x28) + 0x30)) break;
    if (lVar5 == 0) {
      if ((longlong *)*plVar1 == plVar1) {
LAB_000222e3:
        lVar5 = 0;
        break;
      }
      lVar5 = *plVar1 - *(longlong *)(param_1 + 0x108);
    }
    else {
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x108) + lVar5);
      if (plVar7 == plVar1) goto LAB_000222e3;
      lVar5 = (longlong)plVar7 - *(longlong *)(param_1 + 0x108);
    }
  }
  if (lVar5 == 0) {
LAB_000222ea:
    plVar7 = *(longlong **)(param_1 + 0x100);
    plVar1 = (longlong *)(param_2 + 0x80 + *(longlong *)(param_1 + 0x108));
    *plVar1 = *plVar7;
    plVar1[1] = (longlong)plVar7;
    *(longlong **)(*plVar7 + 8) = plVar1;
    *plVar7 = (longlong)plVar1;
  }
  else {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 8 + lVar5);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x108) + 0x80 + param_2);
    lVar5 = *plVar7;
    plVar1[1] = (longlong)plVar7;
    *plVar1 = lVar5;
    *(longlong **)(*plVar7 + 8) = plVar1;
    *plVar7 = (longlong)plVar1;
  }
  *(longlong *)(param_2 + 0x90) = param_1;
  register0x00000020 = (BADSPACEBASE *)FUN_00022350(param_1);
LAB_00022187:
  return CONCAT71((int7)((ulonglong)register0x00000020 >> 8),1);
LAB_00022246:
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  register0x00000020 = (BADSPACEBASE *)FUN_000264d0((ulonglong *)(param_2 + 0xa8),0,0x88);
LAB_0002226f:
  return (ulonglong)register0x00000020 & 0xffffffffffffff00;
}

