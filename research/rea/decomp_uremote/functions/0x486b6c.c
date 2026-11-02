// rea decompile_all
// name: FUN_00486b6c
// address: 0x486b6c
// body: available
// range: 0x486b6c-0x486cdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00486b6c(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_ESI;
  int iVar5;
  int *local_c;
  uint local_8;
  
  iVar2 = unaff_ESI[0x49];
  if (iVar2 == 1) {
    iVar2 = unaff_ESI[0x4a];
    unaff_ESI[0x4e] = *(int *)(iVar2 + 0x1c);
    unaff_ESI[0x4f] = *(int *)(iVar2 + 0x20);
    uVar4 = *(uint *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x24);
    uVar1 = *(uint *)(iVar2 + 0x20) / uVar4;
    uVar3 = *(uint *)(iVar2 + 0x20) % uVar4;
    *(undefined4 *)(iVar2 + 0x34) = 1;
    *(undefined4 *)(iVar2 + 0x38) = 1;
    *(undefined4 *)(iVar2 + 0x3c) = 1;
    *(undefined4 *)(iVar2 + 0x44) = 1;
    if (uVar3 == 0) {
      uVar3 = uVar4;
    }
    *(uint *)(iVar2 + 0x48) = uVar3;
    unaff_ESI[0x51] = 0;
    unaff_ESI[0x50] = 1;
  }
  else {
    if ((iVar2 < 1) || (4 < iVar2)) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x1a;
      *(int *)(*unaff_ESI + 0x18) = unaff_ESI[0x49];
      *(undefined4 *)(*unaff_ESI + 0x1c) = 4;
      (**(code **)*unaff_ESI)();
    }
    iVar2 = FUN_0048e6bf();
    unaff_ESI[0x4e] = iVar2;
    uVar1 = FUN_0048e6bf();
    unaff_ESI[0x4f] = uVar1;
    unaff_ESI[0x50] = 0;
    local_8 = 0;
    if (0 < unaff_ESI[0x49]) {
      local_c = unaff_ESI + 0x4a;
      do {
        iVar2 = *local_c;
        uVar1 = *(uint *)(iVar2 + 8);
        *(uint *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x24) * uVar1;
        uVar4 = *(uint *)(iVar2 + 0x1c) % uVar1;
        *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0xc);
        iVar5 = *(int *)(iVar2 + 0xc) * uVar1;
        *(uint *)(iVar2 + 0x34) = uVar1;
        *(int *)(iVar2 + 0x3c) = iVar5;
        if (uVar4 == 0) {
          uVar4 = uVar1;
        }
        *(uint *)(iVar2 + 0x44) = uVar4;
        uVar1 = *(uint *)(iVar2 + 0x20) % *(uint *)(iVar2 + 0xc);
        if (uVar1 == 0) {
          uVar1 = *(uint *)(iVar2 + 0xc);
        }
        *(uint *)(iVar2 + 0x48) = uVar1;
        if (10 < unaff_ESI[0x50] + iVar5) {
          *(undefined4 *)(*unaff_ESI + 0x14) = 0xd;
          (**(code **)*unaff_ESI)();
        }
        for (; 0 < iVar5; iVar5 = iVar5 + -1) {
          unaff_ESI[unaff_ESI[0x50] + 0x51] = local_8;
          unaff_ESI[0x50] = unaff_ESI[0x50] + 1;
        }
        uVar1 = local_8 + 1;
        local_c = local_c + 1;
        local_8 = uVar1;
      } while ((int)uVar1 < unaff_ESI[0x49]);
    }
  }
  return uVar1;
}

