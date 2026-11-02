// rea decompile_all
// name: FUN_000134c8
// address: 0x134c8
// body: available
// range: 0x134c8-0x1363c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000134c8(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  undefined1 auStack_138 [32];
  undefined2 local_118;
  undefined2 local_116;
  ulonglong *local_110;
  ulonglong local_108 [30];
  ulonglong local_18;
  
  local_18 = DAT_00029100 ^ (ulonglong)auStack_138;
  FUN_000264d0(local_108,0,0xf0);
  local_118 = 0;
  local_110 = local_108;
  local_116 = 0xf0;
  iVar2 = *(int *)(*(longlong *)(param_2 + 0xb8) + 8);
  if (iVar2 < 0) {
LAB_000135fe:
    uVar9 = 0xc00000bb;
  }
  else if (iVar2 < 2) {
    iVar2 = RtlAppendUnicodeToString(&local_118,*(undefined8 *)(param_1 + 0x38));
    iVar3 = RtlAppendUnicodeToString(&local_118,&LAB_00026720);
    iVar4 = RtlAppendUnicodeToString(&local_118,*(undefined8 *)(param_1 + 0x40));
    if (iVar4 == 0 && (iVar2 == 0 && iVar3 == 0)) {
      puVar8 = local_108;
LAB_0001359b:
      uVar6 = 0xffffffffffffffff;
      puVar10 = puVar8;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        uVar1 = *puVar10;
        puVar10 = (ulonglong *)((longlong)puVar10 + 2);
      } while ((short)uVar1 != 0);
      lVar5 = ExAllocatePoolWithTag(1,(int)~uVar6 * 2 + 2,0x6f645043);
      if (lVar5 != 0) {
        lVar7 = lVar5 - (longlong)puVar8;
        do {
          uVar1 = *puVar8;
          *(short *)(lVar7 + (longlong)puVar8) = (short)uVar1;
          puVar8 = (ulonglong *)((longlong)puVar8 + 2);
        } while ((short)uVar1 != 0);
        *(undefined2 *)(lVar5 + (~uVar6 & 0xffffffff) * 2) = 0;
        *(undefined4 *)(param_2 + 0x30) = 0;
        *(longlong *)(param_2 + 0x38) = lVar5;
        IofCompleteRequest(param_2,0);
        goto LAB_00013616;
      }
    }
    uVar9 = 0xc000009a;
  }
  else {
    if (iVar2 != 3) goto LAB_000135fe;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      puVar8 = (ulonglong *)(*(longlong *)(param_1 + 0x30) + 0x1ab4);
      goto LAB_0001359b;
    }
    uVar9 = 0xc0000001;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x30) = uVar9;
  IofCompleteRequest(param_2,0);
LAB_00013616:
  FUN_00026110(local_18 ^ (ulonglong)auStack_138);
  return;
}

